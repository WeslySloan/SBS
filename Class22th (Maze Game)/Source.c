#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character.h"
#include "Keyboard.h"

#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];

void Initalize()
{
	strcpy(maze[0], "111111111");
	strcpy(maze[1], "110101001");
	strcpy(maze[2], "100101101");
	strcpy(maze[3], "100000001");
	strcpy(maze[4], "101110011");
	strcpy(maze[5], "100111001");
	strcpy(maze[6], "101010001");
	strcpy(maze[7], "101000111");
	strcpy(maze[8], "101010001");
	strcpy(maze[9], "101210001");
	strcpy(maze[10], "111111111");
}

void Renderer()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (maze[i][j] == '1')
			{
				printf("¡á");
			}
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			if (maze[i][j] == '2')
			{
				printf("¡Û");
			}
		}
		printf("\n");
	}
}

int main()
{
	Character character = { 4, 1, "¡Ù" };

	Initalize();

	while (1)
	{
		Renderer();

		Input(&maze, &character);

		GotoXY(character.x, character.y);
		printf("%s", character.shape);

		Sleep(10);

		system("cls");

	}
	return 0;
}
