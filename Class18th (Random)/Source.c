#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ViewHP(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("��");
	}
	printf("\n");
}

int main()
{

#pragma region Rand() �Լ�

	// time(NULL) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ���
	// ����� �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand(time(NULL)); // ���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	// 
	// int result = rand() % 10; // 0 ~ 3276 ������ ������ �����ϴ� �Լ��Դϴ�.
	// 
	// // result = result % 10;
	// // 
	// // printf("result ������ �� : %d\n", result);
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 	int result = rand() % 10;
	// 
	// 	printf("result ������ �� : %d\n", result);
	// }

#pragma endregion

#pragma region UP - DOWN GAME

	// srand(time(NULL));
	// 
	// int result = rand()%31;
	// int input = 0;
	// int life = 3;
	// 
	// while (life!=0)
	// {
	// 	printf("���� life : ");
	// 	ViewHP(life);
	// 	scanf_s("%d", &input);
	// 
	// 	// system("cls");
	// 
	// 	if(result != input)
	// 	{
	// 		if (result > input)
	// 		{
	// 			printf("UP!\n");
	// 		}
	// 		if (result < input)
	// 		{
	// 			printf("DOWN!\n");
	// 		}
	// 		life--;
	// 	}
	// 	else
	// 	{
	// 		printf("Victory!");
	// 		break;
	// 	}
	// }
	// if (life == 0)
	// {
	// 	printf("Defeat :(\nresult is : %d", result);
	// }
	// 
	// //system("cls");


#pragma endregion



	return 0;
}