#include <stdio.h>

typedef struct Vector2
{
	int x;
	int y;
}Vector2;
typedef struct //익명 구조체
{
	int x;
	int y;
	int z;

}Vector3;
enum STATUS
{
	// 열거형 중간에 값을 변경하게 되면 그 다음의 값도
	// 이전의 값에 영향을 받은 상태로 증가하게 됩니다.

	IDLE, 
	ATTACK = 10, 
	DIE

	// 열거형은 0부터 시작하며 1씩 증가합니다
};
int Factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}

int main()
{

#pragma region typedef

	// Vector2 vector2;
	// 
	// vector2.x = 10;
	// vector2.y = 20;
	// 
	// printf("Vector2 x : %d\n", vector2.x);
	// printf("Vector2 y : %d\n", vector2.y);
	// 
	// Vector3 vector3 = { 5,10,15 };
	// 
	// printf("Vector3 x : %d\n", vector3.x);
	// printf("Vector3 y : %d\n", vector3.y);
	// printf("Vector3 z : %d\n", vector3.z);


#pragma endregion

#pragma region 열거형

	// enum STATUS status = ATTACK;
	// 
	// switch (status)
	// {
	// 	case IDLE: printf("대기 상태\n");
	// 		break;
	// 	case ATTACK: printf("공격 상태\n");
	// 		break;
	// 	case DIE: printf("죽은 상태\n");
	// 		break;
	// }

#pragma endregion

#pragma region 팩토리얼

	// int n = 0;
	// scanf_s("%d", &n);
	// 
	// int result = Factorial(n);
	// printf("%d의 팩토리얼 값 : %d", n, result);

#pragma endregion

#pragma region 이중 포인터

	// int data = 10;
	// 
	// int * ptr = &data;
	// 
	// int** ptr2 = &ptr;
	// 
	// printf("data 변수의 값 : %d\n", data);
	// 
	// *ptr = 20;
	// 
	// printf("data 변수의 값 : %d\n", data);
	// 
	// **ptr2 = 30;
	// 
	// printf("data 변수의 값 : %d\n", data);

#pragma endregion

#pragma region 이차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	int array2D[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// printf("array2D[1][0]의 값 : %d\n", array2D[1][0]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", array2D[i][j]);
		}
		printf("\n");
	}



	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은
	// 행을 의미하고, 뒤에 있는 배열은 열을 의미합니다.

#pragma endregion



	return 0;
}
