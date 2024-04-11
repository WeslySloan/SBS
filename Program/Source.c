#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define SIZE 10000

void Load(const char* name)
{
	FILE* file = fopen(name,"r");
	char buffer[SIZE] = { 0. }; // 배열전체 0 초기화
	fread(buffer, 1, SIZE, file);
	printf("%s", buffer);
	fclose(file);
}

int main()
{
#pragma region 파일 입출력

	// 파일 입출력을 위해서는 파일을 열고 닫는 과정이 필요합니다.
	// 파일을 열기 위해서는 fopen 함수를 사용합니다.
	// fopen 함수는 파일의 경로와 파일의 모드를 인자로 받습니다.
	// 파일의 경로는 파일의 경로를 문자열로 입력하면 됩니다.

	// r : 읽기 모드
	// w : 쓰기 모드
	// a : 추가 모드
	// r+ : 읽기/쓰기 모드
	// w+ : 읽기/쓰기 모드
	// a+ : 읽기/쓰기 모드

	// 8 byte
	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Level : 5\n", file);
	// fputs("Stage : 3\n", file);
	// fputs("HP : 100\n", file);
	// 
	// fclose(file);

	// fclose 함수는 파일의 포인터를 인자로 받습니다.
	// 파일을 닫으면 파일의 포인터가 NULL로 초기화됩니다.
	// 파일을 닫지 않으면 파일이 계속 열려있께 되어 데이터가 손실될 수 있습니다.

	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0. }; // 배열전체 0 초기화
	// 
	// fread(buffer, 1, SIZE, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);

	// 파일의 내용을 읽어서 buffer에 저장합니다.

#pragma endregion

#pragma region ASCII Generator

	// Load("dragon.txt");

	while (1)
	{
		Load("data.txt");

		system("cls"); // 실시간 수정 가능
	}

#pragma endregion


	return 0;
}
