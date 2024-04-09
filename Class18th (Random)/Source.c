#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ViewHP(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("♥");
	}
	printf("\n");
}

int main()
{

#pragma region Rand() 함수

	// time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터
	// 경과된 시간을 초(sec)로 변환하는 함수입니다.

	// srand(time(NULL)); // 난수 발생기를 초기화하는 함수입니다.
	// 
	// int result = rand() % 10; // 0 ~ 3276 사이의 난수를 생성하는 함수입니다.
	// 
	// // result = result % 10;
	// // 
	// // printf("result 변수의 값 : %d\n", result);
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 	int result = rand() % 10;
	// 
	// 	printf("result 변수의 값 : %d\n", result);
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
	// 	printf("남은 life : ");
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