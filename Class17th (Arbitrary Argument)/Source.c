#include <stdio.h>
#include <stdarg.h>
#include <math.h>

void Debug(int count, ...)
{
	// va_list : ���� ���� ����� �����ϴ� �Լ�
	va_list list = NULL;

	// va_start : ���� ���� ����� ����ϱ� ���� �ʱ�ȭ�ϴ� �Լ�
	va_start(list, count);

	// va_arg : ���� ���� ��Ͽ��� ���� �������� Ư�� �ڷ����� ũ�⸸ŭ �̵��ϴ� �Լ�
	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(list, int));
	}

	// va_end : ���� ���� ����� ��� �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�
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
#pragma region ���� ���� ���
	// �Ű� ������ ������ �������� ���� �Ű� ������ ���� ��
	// ����ϴ� �μ��Դϴ�.

	// Debug(3, 10, 20, 30);
	// 
	// printf("\n");
	// 
	// Debug(5, 10, 20, 30, 40, 50);

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100)); // ��Ʈ
	// printf("2�� 2�� : %lf\n", pow(2, 2)); // a �� b��

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
	// 	printf("������ �� �ֽ��ϴ�.");
	// }
	// else
	// {
	// 	printf("������ �� �����ϴ�.");
	// }



#pragma endregion

#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.

	Calculator(Add, 10, 20);
	Calculator(Substract, 10, 20);
	Calculator(Multiply, 10, 20);
	Calculator(Divide, 10, 20);

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �մϴ�.

#pragma endregion


	return 0;
}