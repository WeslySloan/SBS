#include <stdio.h>
#include <conio.h> // getch() �Լ��� ����ϱ� ���� �߰�

// ���� ũ�� ���
#define MAP_WIDTH 20
#define MAP_HEIGHT 10

// �÷��̾��� �ʱ� ��ġ
#define INITIAL_PLAYER_X 1
#define INITIAL_PLAYER_Y 1

// �� ������ �迭
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

// �÷��̾� ��ġ ����
int playerX = INITIAL_PLAYER_X;
int playerY = INITIAL_PLAYER_Y;

// ���� ȭ�鿡 ����ϴ� �Լ�
void drawMap() {
    system("cls"); // �ܼ� ȭ���� ����

    // �� �����͸� ȭ�鿡 ���
    for (int i = 0; i < MAP_HEIGHT; i++) {
        printf("%s\n", map[i]);
    }
}

int main() {
    char input;

    drawMap(); // �ʱ� �� ���

    // ���� ����
    while (1) {
        // �÷��̾� �Է� ó��
        input = getch(); // Ű���� �Է� �ޱ�

        // �̵� ó��
        switch (input) {
        case 'w': // �������� �̵�
            if (playerY > 1 && map[playerY - 1][playerX] == ' ') {
                playerY--;
            }
            break;
        case 's': // �Ʒ������� �̵�
            if (playerY < MAP_HEIGHT - 2 && map[playerY + 1][playerX] == ' ') {
                playerY++;
            }
            break;
        case 'a': // �������� �̵�
            if (playerX > 1 && map[playerY][playerX - 1] == ' ') {
                playerX--;
            }
            break;
        case 'd': // ���������� �̵�
            if (playerX < MAP_WIDTH - 2 && map[playerY][playerX + 1] == ' ') {
                playerX++;
            }
            break;
        case 'q': // ���� ����
            return 0;
        default:
            break;
        }

        drawMap(); // ���� �ٽ� �׸�
    }

    return 0;
}
