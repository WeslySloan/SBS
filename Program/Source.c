#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int width = 100;
int height = 30;

HANDLE screen[2]; // ���۸� �����մϴ�
			   // screen[0] front buffer
			   // screen[1] back buffer	

//HANDLE �ε����� �����ؼ� ���۸� ��ü��Ű�� ����

int screenIndex = 0;

void GotoXY(int x, int y)
{
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void InitializeScreen()
{
	CONSOLE_CURSOR_INFO cursor;

	// ������ ���� ������, ���� ������
	COORD size = { width, height };

	// left, top, right, bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// front buffer�� �����մϴ�.
	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, //�б�,����
		0,							  // �������
		NULL,						  // ���ȼӼ�
		CONSOLE_TEXTMODE_BUFFER,	  // ���۸��
		NULL						  // ���ȼӼ�
	);								  

	// ������ ����� �����մϴ�.
	SetConsoleScreenBufferSize(screen[1], size);

	// ������ ��ġ�� �����մϴ�.
	SetConsoleWindowInfo(screen[1], TRUE, &rect); // TRUE : ������ ��ġ�� �����մϴ�.

	// Ŀ���� Ȱ��ȭ ����
	// false : Ŀ���� ����ϴ�.
	// true  : Ŀ���� ���Դϴ�.

	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}

//���۸� ��ü�ϴ� �Լ�
void FlipScreen()
{
	// ���۸� �ϳ��� Ȱ��ȭ��ų �� �ִ� �Լ�
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;
}

void ClearScreen()
{
	COORD position = { 0, 0 };

	DWORD written;

	FillConsoleOutputCharacter // ȭ�鿡 ���ڸ� �׷��ִ� �Լ�
	(
		screen[screenIndex], // ȭ�� ����
		' ',                 // ȭ�鿡 �׷��� ����
		width * height,      //    ȭ�鿡 �׷��� ������ ����
		position,            // ȭ�鿡 �׷��� ������ ��ġ
		&written             // ������ ����
	);
}

// ���۸� �����ϴ� �Լ�
void ReleaseScreen()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);
}

// ���۸� ����ϴ� �Լ�
void DrawScreen(int x, int y, const char* string)
{
	COORD position = { x, y };

	DWORD written;

	SetConsoleCursorPosition
	(
		screen[screenIndex],
		position
	); // ������ ��ġ�� �����մϴ�.

	WriteFile
	(
		screen[screenIndex], // ����
		string,				 // ���ڿ�
		strlen(string),		 // ���ڿ��� ����
		&written,			 // ���ڿ��� ����
		NULL				 // ���ȼӼ�
	); // ���ۿ� ���ڿ��� ����մϴ�.
}

typedef struct Star
{
	int x, y;
	const char* shape;
}Star;



int main(void)
{
	InitializeScreen();

	int characterX = 10;
	int characterY = 5;

	while (1)
	{
		int random = rand() % 4;

		switch (random)
		{
		case 0: // ���� �������� �̵�
			if (characterY > 0)
				characterY--;
			break;
		case 1: // ���� �������� �̵�
			if (characterX > 0)
				characterX--;
			break;
		case 2: // ���� �������� �̵�
			if (characterY < height - 1)
				characterY++;
			break;
		case 3: // ���� �������� �̵�
			if (characterX < width - 1)
				characterX++;
			break;
		}

		//// 1. ���۸� �ʱ�ȭ�մϴ�.
		//InitializeScreen(5, 5, "��");

		//// 2. ���۸� ��ü�մϴ�.
		//FlipScreen();

		//// 3. ��ü�� ������ ������ �����մϴ�.
		//ClearScreen();

		//Sleep(50);

		DrawScreen(10, 5, "��");
		FlipScreen();
		ClearScreen();
	}

	// 4. ���۸� �����մϴ�.
	ReleaseScreen();



	return 0;
}
