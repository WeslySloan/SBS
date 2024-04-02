#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Goblin
{
	char grade;
	int health;
	const char* name;
};

struct GameObject
{
	int x;
	double y; 
	short z;

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의
	// 크기가 다르게 설정될 수 있으며, 구조체 크기를 결정하는
	// 형태는 기본 자료형으로만 구성됩니다.
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한
	// 다음 하나의 객체를 생성하는 것입니다.

	// struct Goblin goblin1;
	// 
	// goblin1.grade = 'A';
	// goblin1.health = 100;
	// goblin1.name = "난폭한 고블린";
	// 
	// printf("goblin의 주소 : %p\n", &goblin1);
	// 
	// printf("goblin.grade의 값 : %c\n", &goblin1.grade);
	// printf("goblin.health의 값 : %d\n", &goblin1.health);
	// printf("goblin.name의 값 : %s\n", &goblin1.name);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.

	// struct Goblin goblin2 = { 'S', 200, "진화한 고블린" };
	// 
	// printf("goblin2.grade의 값 : %c\n", &goblin2.grade);
	// printf("goblin2.health의 값 : %d\n", &goblin2.health);
	// printf("goblin2.name의 값 : %s\n", &goblin2.name);

	// 구조체의 데이터를 초기화할 때 초기화 리스트를 사용하여
	// 초기화할 수 있으며, 왼쪽에서부터 오른쪽으로 순서대로 초기화합니다.

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수
	// 있도록, 컴파일러가 레지스터의 블록에 맞추어 바이트를
	// 패딩해주는 최적화 작업입니다.

	// struct GameObject gameObject;
	// 
	// printf("GameObject의 크기 : %d\n", sizeof(gameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.
#pragma endregion

#pragma region 회문

	const char* string = "level";

	int size = strlen(string);
	int flag = 0;

	for (int i = 0; i < size / 2; i++)
	{
		if (string[i] != string[size - 1 - i])
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		printf("회문입니다\n");
	}
	else
	{
		printf("회문이 아닙니다\n");
	}

	// printf("size의 값 : %d\n", size);

#pragma endregion




	return 0;
}