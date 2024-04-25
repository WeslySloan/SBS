#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdbool.h>
#define DINO_BOTTOM_Y 12
#define TREE_BOTTOM_Y 20
#define TREE_BOTTOM_X 45

void SetConsoleView()
{
    system("mode con:cols=100 lines=25");
    system("title RunGame");
}

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = 2 * x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int GetKeyDown()
{
    if (_kbhit() != 0)
    {
        return _getch();
    }
    return 0;
}

void DrawDino(int dinoY)
{
    GotoXY(0, dinoY);
    static bool legFlag = true;
    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    if (legFlag)
    {
        printf("     $    $$$    \n");
        printf("     $$          ");
        legFlag = false;
    }
    else
    {
        printf("     $$$  $     \n");
        printf("          $$    ");
        legFlag = true;
    }
}

void DrawTree(int treeX)
{
    GotoXY(treeX, TREE_BOTTOM_Y);
    printf("$$$$");
    GotoXY(treeX, TREE_BOTTOM_Y + 1);
    printf(" $$ ");
    GotoXY(treeX, TREE_BOTTOM_Y + 2);
    printf(" $$ ");
    GotoXY(treeX, TREE_BOTTOM_Y + 3);
    printf(" $$ ");
    GotoXY(treeX, TREE_BOTTOM_Y + 4);
    printf(" $$ ");
}

void DrawGameOver(const int score)
{
    system("cls");
    int x = 18;
    int y = 8;
    GotoXY(x, y);
    printf("===========================");
    GotoXY(x, y + 1);
    printf("======G A M E O V E R======");
    GotoXY(x, y + 2);
    printf("===========================");
    GotoXY(x, y + 5);
    printf("SCORE : %d", score);

    printf("\n\n\n\n\n\n\n\n\n");
    system("pause");
}

bool isCollision(const int treeX, const int dinoY)
{

    GotoXY(0, 0);
    printf("treeX : %d, dinoY : %d", treeX, dinoY);
    if (treeX <= 8 && treeX >= 4 &&
        dinoY > 8)
    {
        return true;
    }
    return false;
}

void DrawGameStart()
{
    system("cls");
    int x = 17;
    int y = 4;
    GotoXY(x, y);
    printf("================================");
    GotoXY(x, y + 1);
    printf("======== R U N  G A M E ========"); 
    GotoXY(x, y + 2);
    printf("================================");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(" 조작 : ↑↓ / 확인 : ENTER");
}

int First_Menu()
{
    int i = 1; // 메뉴 선택
    int key = 0; // 키 인식

    while (1)
    {
        system("cls");
        DrawGameStart();

        GotoXY(38, 14);
        printf("시작 %c%c", 0xa1, 0xdb);
        GotoXY(38, 15);
        printf("설명 %c%c", 0xa1, 0xdb);
        GotoXY(38, 16);
        printf("종료 %c%c", 0xa1, 0xdb);

        while (1)
        {
            GotoXY(41, 13 + i);
            printf("\b%c%c", 0xa1, 0xdc);

            GotoXY(0, 28);
            key = _getch();
            if (key == 224)
            {
                key = _getch();
                GotoXY(41, 13 + i);
                printf("\b%c%c", 0xa1, 0xdb);
                switch (key)
                {
                case 72:
                    if (i > 1)
                        i--;
                    break;

                case 80:
                    if (i < 3)
                        i++;
                    break;

                default:
                    break;
                }
            }

            if (key == 32 || key == 13)
                break;
        }

        if (i == 1)
        {
            break;
            //첫번째칸
        }

        if (i == 2)
        {
            break;
            //두번쨰칸
        }

        if (i == 3)
        {
            exit(0);
        }
    }

    return i;
}





int main()
{
    SetConsoleView();
    int userChoice = First_Menu();


    while (userChoice==1)
    {
        bool isJumping = false;
        bool isBottom = true;
        const int gravity = 3;

        int dinoY = DINO_BOTTOM_Y;
        int treeX = TREE_BOTTOM_X;

        int score = 0;
        clock_t start, curr;
        start = clock();
        while (true)
        {
            if (isCollision(treeX, dinoY))
                break;

            if (GetKeyDown() == 'z' && isBottom)
            {
                isJumping = true;
                isBottom = false;
            }

            if (isJumping)
            {
                dinoY -= gravity;
            }
            else
            {
                dinoY += gravity;
            }

            if (dinoY >= DINO_BOTTOM_Y)
            {
                dinoY = DINO_BOTTOM_Y;
                isBottom = true;
            }


            treeX -= 2;
            if (treeX <= 0)
            {
                treeX = TREE_BOTTOM_X;
            }


            if (dinoY <= 3)
            {
                isJumping = false;
            }

            DrawDino(dinoY);
            DrawTree(treeX);

            curr = clock();
            if (((curr - start) / CLOCKS_PER_SEC) >= 1)
            {
                score++;
                start = clock();
            }
            Sleep(60);
            system("cls");

            GotoXY(22, 0);
            printf("Score : %d ", score);
        }

        DrawGameOver(score);
    }


    while (userChoice == 2)
    {
        printf("2번");
    }

    return 0;
}




