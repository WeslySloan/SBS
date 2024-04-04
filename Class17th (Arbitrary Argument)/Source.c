#include <stdio.h>
#include <stdarg.h>
#include <math.h>

void Debug(int count, ...)
{
	// va_list : 가변 길이 목록을 저장하는 함수
	va_list list = NULL;

	// va_start : 가변 길이 목록을 사용하기 위해 초기화하는 함수
	va_start(list, count);

	// va_arg : 가변 길이 목록에서 값을 가져오고 특정 자료형의 크기만큼 이동하는 함수
	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(list, int));
	}

	// va_end : 가변 길이 목록을 사용 후 포인터를 NULL로 초기화하는 함수
	va_end(list);

}


struct loc
{
	int x;
	int y;
};

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

double Add(double x, double y)
{
	return x + y;
}

double Substract(double x, double y)
{
	return x - y;
}

double Multiply(double x, double y)
{
	return x * y;
}

double Divide(double x, double y)
{
	return x / y;
}


void Calculator(double (*ptr)(double x, double y), double u, double v)
{
	printf("%.4lf\n", ptr(u, v));
}

int main()
{
#pragma region 가변 길이 목록
	// 매개 변수의 개수가 정해지지 않은 매개 변수를 받을 때
	// 사용하는 인수입니다.

	// Debug(3, 10, 20, 30);
	// 
	// printf("\n");
	// 
	// Debug(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region 두 점 사이의 거리

	// printf("100의 제곱근 : %lf\n", sqrt(100)); // 루트
	// printf("2에 2승 : %lf\n", pow(2, 2)); // a 의 b승

	// int Player[2] = { 0, };
	// int Monster[2] = { 0, };
	// double len = 0;
	// 
	// scanf_s("%d %d", &Player[0], &Player[1]);
	// 
	// scanf_s("%d %d", &Monster[0], &Monster[1]);
	// 
	// struct loc player = { Player[0], Player[1] };
	// struct loc monster = { Monster[0], Monster[1] };
	// 
	// len = sqrt(pow(player.x - monster.x, 2) + pow(player.y - monster.y, 2));
	// 
	// if (len <= 5)
	// {
	// 	printf("공격할 수 있습니다.");
	// }
	// else
	// {
	// 	printf("공격할 수 없습니다.");
	// }



#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는 변수입니다.

	Calculator(Add, 10, 20);
	Calculator(Substract, 10, 20);
	Calculator(Multiply, 10, 20);
	Calculator(Divide, 10, 20);

	// 함수 포인터는 함수의 변환형과 매개 변수의 타입이
	// 일치해야 합니다.

#pragma endregion


	return 0;
}