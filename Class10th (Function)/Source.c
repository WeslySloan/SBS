#include <stdio.h>
void Function()
{

}

void Damage(int attack)
{

}

float Add(float x, float y)
{

}

void Recovery(float health)
{
	health = 100;
}

void Swap(int* x, int* y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}

int main()
{

#pragma region 함수

#pragma endregion


#pragma region 매개 변수

	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// Damage(25)

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 사라지는 특징을 가지고 있습니다.

	// printf("Add(10.5f, 20.75f)의 결과 : %f\n", Add(10.5f, 20.75f));

	// 하나의 함수에서 서로 다른 자로형의 매개 변수를 함께 정의할
	// 수 있으며, 여러 개의 매개 변수를 선언할 수도 있습니다.

#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 
	// 전달되는 값입니다.

	// int health = 50;
	// 
	// Recovery(health);
	// 
	// printf("health 변수의 값 : %d\n", health);
	// 
	// 함수를 호출할 때 변수의 값을 인수로 전달하게
	// 되면 함수의 매개 변수에 변수의 복사된 값이 
	// 전달됙 때문에 인수로 전달한 변수는 함수 내에서
	// 일어난 연산에 대해 영향을 받지 않습니다.

	// int a = 10;
	// int b = 20;
	// 
	// printf("Swap 전 a 변수의 값 : %d\n", a);
	// printf("Swap 전 b 변수의 값 : %d\n", b);
	// 
	// Swap(&a, &b);
	// 
	// printf("Swap 후 a 변수의 값 : %d\n", a);
	// printf("Swap 후 b 변수의 값 : %d\n", b);

	// 함수를 호출할 때 변수의 주소를 인수로 전달하게 되면
	// 전달한 변수의 주소가 참조되어 인수로 전달한 변수의 
	// 값이 함수 내에서 일어난 연산에 대해 영향을 받습니다.

#pragma endregion

	return 0;
}