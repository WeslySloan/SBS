//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>
//
//#define MAP_WIDTH 20
//#define MAP_HEIGHT 10
//#define PLAYER_ICON '@'
//#define WALL_ICON '#'
//#define FLOOR_ICON '.'
//
//char map[MAP_HEIGHT][MAP_WIDTH];
//char buffer[MAP_HEIGHT][MAP_WIDTH];
//
//int playerX, playerY;
//
//// 던전 맵 초기화
//void initializeMap() {
//    for (int y = 0; y < MAP_HEIGHT; y++) {
//        for (int x = 0; x < MAP_WIDTH; x++) {
//            map[y][x] = WALL_ICON;
//        }
//    }
//}
//
//// 플레이어의 초기 위치 설정
//void initializePlayer() {
//    srand(time(NULL));
//    playerX = rand() % (MAP_WIDTH - 2) + 1;
//    playerY = rand() % (MAP_HEIGHT - 2) + 1;
//}
//
//// 랜덤한 맵 생성
//void generateRandomMap() {
//    for (int y = 1; y < MAP_HEIGHT - 1; y++) {
//        for (int x = 1; x < MAP_WIDTH - 1; x++) {
//            if (rand() % 10 < 7) {
//                map[y][x] = FLOOR_ICON;
//            }
//        }
//    }
//}
//
//// 통로 생성
//void generateCorridor(int startX, int startY, int endX, int endY) {
//    int x = startX, y = startY;
//    while (x != endX || y != endY) {
//        if (x < endX) {
//            x++;
//        }
//        else if (x > endX) {
//            x--;
//        }
//        if (y < endY) {
//            y++;
//        }
//        else if (y > endY) {
//            y--;
//        }
//        map[y][x] = FLOOR_ICON;
//    }
//}
//
//// 버퍼에 맵 복사
//void copyMapToBuffer() {
//    for (int y = 0; y < MAP_HEIGHT; y++) {
//        for (int x = 0; x < MAP_WIDTH; x++) {
//            buffer[y][x] = map[y][x];
//        }
//    }
//}
//
//// 버퍼에 플레이어 위치 표시
//void drawPlayerOnBuffer() {
//    buffer[playerY][playerX] = PLAYER_ICON;
//}
//
//// 버퍼를 화면에 출력
//void drawBuffer() {
//    system("cls");
//    for (int y = 0; y < MAP_HEIGHT; y++) {
//        for (int x = 0; x < MAP_WIDTH; x++) {
//            putchar(buffer[y][x]);
//        }
//        putchar('\n');
//    }
//}
//
//// 플레이어 움직임 처리
//void movePlayer(int dx, int dy) {
//    int newX = playerX + dx;
//    int newY = playerY + dy;
//    if (map[newY][newX] != WALL_ICON) {
//        playerX = newX;
//        playerY = newY;
//    }
//}
//
//// 게임 루프
//void gameLoop() {
//    int dx, dy;
//    char input;
//    while (1) {
//        copyMapToBuffer();
//        drawPlayerOnBuffer();
//        drawBuffer();
//        printf("Move (WASD): ");
//        input = _getch();
//        switch (input) {
//        case 'w': dx = 0; dy = -1; break;
//        case 'a': dx = -1; dy = 0; break;
//        case 's': dx = 0; dy = 1; break;
//        case 'd': dx = 1; dy = 0; break;
//        default: dx = 0; dy = 0; break;
//        }
//        movePlayer(dx, dy);
//    }
//}
//
//int main() {
//    initializeMap();
//    initializePlayer();
//    generateRandomMap();
//    generateCorridor(playerX, playerY, MAP_WIDTH / 2, MAP_HEIGHT / 2); // 플레이어 위치와 중간 지점을 연결하는 통로 생성
//    gameLoop();
//    return 0;
//}




#include <stdio.h>
#include <conio.h>
#include <windows.h>            // gotoxy, system, sleep
#include <time.h>               // srand

float money = 500.00;   // money


void Edge();    // Drawing
void gotoxy(int x, int y);
void Poker_Room();
void ShowCard(int N[], int T[], int C[]);

void Big_Clear();
void Long_Clear();
void Small_Clear();
void Loading_Clear();
void Full_Clear();

int main(void) {
	srand(time(NULL));
	system("mode con cols=115 lines=30");	// Screen resizing
	system("cls");
	Edge();
	Poker_Room();

}

void Edge() {
	int i;
	int h = 0xa2;
	int v = 0xcc;

	for (i = 0; i <= 42; i++) {			// Main Horizontal
		gotoxy(i * 2, 0);
		printf("%c%c", h, v);

		gotoxy(i * 2, 20);
		printf("%c%c", h, v);

		gotoxy(i * 2, 26);
		printf("%c%c", h, v);

		gotoxy(i * 2, 28);
		printf("%c%c", h, v);
	}

	for (i = 0; i <= 28; i++) {				// Main Vertical
		gotoxy(0, i);
		printf("%c%c", h, v);

		gotoxy(84, i);
		printf("%c%c", h, v);
	}

	for (i = 0; i < 10; i++) {			// Select Horizontal
		gotoxy(88 + i * 2, 20);
		printf("%c%c", h, v);

		gotoxy(88 + i * 2, 26);
		printf("%c%c", h, v);
	}

	for (i = 0; i < 6; i++) {				// Select Vertical
		gotoxy(88, 20 + i);
		printf("%c%c", h, v);

		gotoxy(106, 20 + i);
		printf("%c%c", h, v);
	}
}

void Status() {
	gotoxy(88, 3);printf("Money($) :  %.2lf ", money);
}

void Set_Color(int Text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Text | 0);
}

void gotoxy(int x, int y) {	// gotoxy
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Big_Clear() {	// Made by 2020xodn
	gotoxy(2, 1);printf("                                                                                  ");
	gotoxy(2, 2);printf("                                                                                  ");
	gotoxy(2, 3);printf("                                                                                  ");
	gotoxy(2, 4);printf("                                                                                  ");
	gotoxy(2, 5);printf("                                                                                  ");
	gotoxy(2, 6);printf("                                                                                  ");
	gotoxy(2, 7);printf("                                                                                  ");
	gotoxy(2, 8);printf("                                                                                  ");
	gotoxy(2, 9);printf("                                                                                  ");
	gotoxy(2, 10);printf("                                                                                  ");
	gotoxy(2, 11);printf("                                                                                  ");
	gotoxy(2, 12);printf("                                                                                  ");
	gotoxy(2, 13);printf("                                                                                  ");
	gotoxy(2, 14);printf("                                                                                  ");
	gotoxy(2, 15);printf("                                                                                  ");
	gotoxy(2, 16);printf("                                                                                  ");
	gotoxy(2, 17);printf("                                                                                  ");
	gotoxy(2, 18);printf("                                                                                  ");
	gotoxy(2, 19);printf("                                                                                  ");
}

void Long_Clear() {
	gotoxy(2, 21);printf("                                                                                  ");
	gotoxy(2, 22);printf("                                                                                  ");
	gotoxy(2, 23);printf("                                                                                  ");
	gotoxy(2, 24);printf("                                                                                  ");
	gotoxy(2, 25);printf("                                                                                  ");
}

void Small_Clear() {
	gotoxy(90, 21);printf("                ");
	gotoxy(90, 22);printf("                ");
	gotoxy(90, 23);printf("                ");
	gotoxy(90, 24);printf("                ");
	gotoxy(90, 25);printf("                ");
}

void Loading_Clear() {
	gotoxy(2, 27);printf("                                                                                  ");
}

void Full_Clear() {
	Edge();
	Big_Clear();
	Long_Clear();
	Small_Clear();
	Loading_Clear();
	Status();
}




void Poker_Room() {

	while (1) {
		int Number[5];              // number
		int Type[5];                // type
		int T_Number[6] = { 0, };		// discarded card
		int T_Type[6] = { 0, };

		int point = 0;				    // At every game , score reset
		int Change[5] = { 1,1,1,1,1 };			// Change reset
		int hh = 1;
		Status();
		Full_Clear();
		getchar();

		for (int i = 0; i <= 4; i++) {
			Sleep(200);
			gotoxy(8 + i * 15, 8); printf("┏━━━━━━┓ ");
			gotoxy(8 + i * 15, 9); printf("┃ ?    ┃ ");
			gotoxy(8 + i * 15, 10);printf("┃      ┃ ");
			gotoxy(8 + i * 15, 11);printf("┃   ?  ┃ ");
			gotoxy(8 + i * 15, 12);printf("┃      ┃ ");
			gotoxy(8 + i * 15, 13);printf("┃     ?┃ ");
			gotoxy(8 + i * 15, 14);printf("┗━━━━━━┛ ");
		}

		for (int i = 0; i <= 4; i++)					// Draw Card
		{
			Number[i] = rand() % 9 + 6;
			Type[i] = rand() % 4 + 1;

			for (int j = 1; i - j >= 0; j++)		// Check 
			{
				if (Number[i] == Number[i - j] && Type[i] == Type[i - j])
					i--;
			}
		}

		ShowCard(Number, Type, Change);

		for (int i = 0; i <= 4; i++) // Change reset
			Change[i] = 0;




		while (hh != -1) {
			gotoxy(22, 5);printf("Change? number : (-1 to exit) : ");
			scanf_s("%d", &hh);
			if (hh != -1)
				Change[hh] = 1;
		}


		for (int i = 0; i <= 4; i++) {
			Sleep(200);

			if (Change[i] == 1) {
				gotoxy(8 + i * 15, 8); printf("┏━━━━━━┓ ");
				gotoxy(8 + i * 15, 9); printf("┃ ?    ┃ ");
				gotoxy(8 + i * 15, 10);printf("┃      ┃ ");
				gotoxy(8 + i * 15, 11);printf("┃   ?  ┃ ");
				gotoxy(8 + i * 15, 12);printf("┃      ┃ ");
				gotoxy(8 + i * 15, 13);printf("┃     ?┃ ");
				gotoxy(8 + i * 15, 14);printf("┗━━━━━━┛ ");
			}
		}


		for (int i = 0; i <= 4; i++) {
			if (Change[i] == 1) {
				T_Number[i] = Number[i];        // Save discarded card ( To prevent duplication )
				T_Type[i] = Type[i];

				Number[i] = rand() % 9 + 6;
				Type[i] = rand() % 4 + 1;

				for (int j = 1; i - j >= 0; j++)		// Check 
				{
					if (Number[i] == Number[i - j] && Type[i] == Type[i - j])
						i--;
					else if (Number[i] == T_Number[j] && Type[i] == T_Type[j]) {
						i--;
					}
				}
			}
		}

		/*       Number[0] = 13;       // FOR TEST
			   Number[1] = 12;
			   Number[2] = 11;
			   Number[3] = 10;
			   //Number[4] = 9;
			   Type[0] = 1;
			   Type[1] = 1;
			   Type[2] = 1;
			   Type[3] = 1;
			   Type[4] = 1;*/

		ShowCard(Number, Type, Change);


		// Scoring Start

		if (Type[0] == Type[1] && Type[0] == Type[2] && Type[0] == Type[3] && Type[0] == Type[4])  // Flush
			point += 10;

		{									// Straight
			for (int i = 0; i <= 3; i++)			// Descending Bubble Sort
			{
				for (int j = 0; j <= 3 - i; j++)
				{
					if (Number[j] < Number[j + 1])
					{
						int t = Number[j];
						Number[j] = Number[j + 1];
						Number[j + 1] = t;

						t = Type[j];
						Type[j] = Type[j + 1];
						Type[j + 1] = t;
					}
				}
			}

			if ((Number[0] - 1) == Number[1]) {	// Check if it gets smaller				
				if ((Number[1] - 1) == Number[2]) {
					if ((Number[2] - 1) == Number[3]) {
						if ((Number[3] - 1) == Number[4])
							point += 20;
					}
				}
			}
		}

		for (int i = 0; i <= 3; i++) {	// Kind of Pair, Full House
			for (int j = 1; (i + j) <= 4; j++) {
				if (Number[i] == Number[i + j])
					point++;
			}
		}


		switch (point) {						// 결과
		case 0:
			gotoxy(3, 22);printf("High Card.");
			break;

		case 1:
			gotoxy(3, 22);printf("Pair.");
			break;

		case 2:
			gotoxy(3, 22);printf("Two Pair.");
			break;

		case 3:
			gotoxy(3, 22);printf("Three of a kind.");
			break;

		case 4:
		case 13:
			gotoxy(3, 22);printf("Full House.");
			break;

		case 6:
		case 16:
			gotoxy(3, 22);printf("Four of a kind.");
			break;

		case 10:
		case 11:
		case 12:
			gotoxy(3, 22);printf("Flush.");
			break;

		case 20:
			gotoxy(3, 22);printf("Straight.");
			break;
		}
		gotoxy(3, 23);printf("point is %d", point);



		getchar();
		getchar();
	}

}

void ShowCard(int N[], int T[], int C[])	// Print Card
{
	for (int i = 0; i <= 4; i++)	// Made by 2020xodn
	{

		Set_Color(15);

		if (C[i] == 1)									// Print Only replaced cards
		{
			gotoxy(10 + 15 * i, 9);				// Top Pattern
			if (T[i] == 1)
				printf("%c%c", 0xa2, 0xbc);
			else if (T[i] == 2)
			{
				Set_Color(12);
				printf("%c%c", 0xa2, 0xbe);
			}
			else if (T[i] == 3)
			{
				Set_Color(12);
				printf("%c%c", 0xa1, 0xdf);
			}
			else if (T[i] == 4)
				printf("%c%c", 0xa2, 0xc0);

			gotoxy(13 + 15 * i, 13);			// Bottom Pattern
			if (T[i] == 1)
				printf("%c%c", 0xa2, 0xbc);
			else if (T[i] == 2)
				printf("%c%c", 0xa2, 0xbe);
			else if (T[i] == 3)
				printf("%c%c", 0xa1, 0xdf);
			else if (T[i] == 4)
				printf("%c%c", 0xa2, 0xc0);

			gotoxy(12 + 15 * i, 11);			// Number
			if (N[i] <= 10)
				printf("\b%2d ", N[i]);
			if (N[i] == 11)
				printf("J ");
			if (N[i] == 12)
				printf("Q ");
			if (N[i] == 13)
				printf("K ");
			if (N[i] == 14)
				printf("A ");

			gotoxy(0, 28);
			Sleep(350);		// 350
		}
	}
	Set_Color(15);
}