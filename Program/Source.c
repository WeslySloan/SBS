#include <stdio.h>

void Awake()
{
	printf("Awake\n");

	Awake();
}

void Recursive(int count)
{
	if (count <= 3)
	{
		return;
	}
	Recursive(count - 1);

	printf("count ������ �� : %d\n", count);

}

inline void Process(int data)
{
	pritnf("%d %%��ŭ �����Ͱ� ó���Ǿ����ϴ�.", data);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ ��
	// �¶��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ���
	// ��ȯ�Ǳ⵵ �մϴ�.
}


int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Awake();

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻��մϴ�.

	// Recursive(3);

	// ��� �Լ��� ��� Ư���� �������� �Լ���
	// ��ȯ�ؾ� �ϸ�, ��������� ȣ���� �Լ���
	// ���� �����ӿ� ���� �������� ȣ��� �Լ�
	// ���� ���ʴ�� ���� �������� �����˴ϴ�.
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

	// int arr[] = {1, 2, 10, 4, 9, 3, 11};
	// int max = arr[0];
	// int min = arr[0];
	// for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	// {
	// 	if (max < arr[i])
	// 	{
	// 		max = arr[i];
	// 	}
	// 	if (min > arr[i])
	// 	{
	// 		min = arr[i];
	// 	}
	// }
	// printf("max �� : %d\n", max);
	// printf("min �� : %d\n", min);



#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// Process(75);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ�
	// ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ�
	// �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ
	// Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region �Ҽ�
	// flag �� i ��ü, break

	int flag = 0;
	int a = 0;

	scanf_s("%d", &a);
	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		printf("�Ҽ� �Դϴ�.");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.");
	}
#pragma endregion

	return 0;
}