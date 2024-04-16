#pragma once
#include "Character.h"
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

void Input(char maze[WIDTH][HEIGHT], Character * character)
{
	if (maze[character->y][character->x / 2] == '2')
	{
		printf("END");
		exit(1);
	}


	if (_kbhit()) // 키보드 입력이 있는지 확인
	{
		char key = _getch(); // 키보드 입력을 받습니다

		switch (key)
		{
			case 32 : break;
			case UP : 
                if (character->y > 0)
					if (maze[character->y-1][character->x/2] != '1')
						character->y--;
                break;
			case LEFT : 
                if (character->x > 0)
					if (maze[character->y][character->x/2 - 1 ] != '1')
						character->x -= 2;
                break;
			case RIGHT : 
                if (character->x < 119)
					if (maze[character->y][character->x/2 + 1 ] != '1')
						character->x += 2;
                break;
			case DOWN :
                if (character->y < 29)
					if (maze[character->y+1][character->x/2] != '1')
						character->y++;
                break;
		}
	}
}