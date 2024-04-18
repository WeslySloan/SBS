#include <stdio.h>
#include <conio.h> // getch() 함수를 사용하기 위해 추가

// 맵의 크기 상수
#define MAP_WIDTH 20
#define MAP_HEIGHT 10

// 플레이어의 초기 위치
#define INITIAL_PLAYER_X 1
#define INITIAL_PLAYER_Y 1

// 맵 데이터 배열
char map[MAP_HEIGHT][MAP_WIDTH] = {
    "###################",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "###################"
};

// 플레이어 위치 변수
int playerX = INITIAL_PLAYER_X;
int playerY = INITIAL_PLAYER_Y;

// 맵을 화면에 출력하는 함수
void drawMap() {
    system("cls"); // 콘솔 화면을 지움

    // 맵 데이터를 화면에 출력
    for (int i = 0; i < MAP_HEIGHT; i++) {
        printf("%s\n", map[i]);
    }
}

int main() {
    char input;

    drawMap(); // 초기 맵 출력

    // 게임 루프
    while (1) {
        // 플레이어 입력 처리
        input = getch(); // 키보드 입력 받기

        // 이동 처리
        switch (input) {
        case 'w': // 위쪽으로 이동
            if (playerY > 1 && map[playerY - 1][playerX] == ' ') {
                playerY--;
            }
            break;
        case 's': // 아래쪽으로 이동
            if (playerY < MAP_HEIGHT - 2 && map[playerY + 1][playerX] == ' ') {
                playerY++;
            }
            break;
        case 'a': // 왼쪽으로 이동
            if (playerX > 1 && map[playerY][playerX - 1] == ' ') {
                playerX--;
            }
            break;
        case 'd': // 오른쪽으로 이동
            if (playerX < MAP_WIDTH - 2 && map[playerY][playerX + 1] == ' ') {
                playerX++;
            }
            break;
        case 'q': // 게임 종료
            return 0;
        default:
            break;
        }

        drawMap(); // 맵을 다시 그림
    }

    return 0;
}
