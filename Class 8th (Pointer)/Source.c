#include <stdio.h>

void main()
{

#pragma region �ּ� ������
	// ������ �ּҰ��� ��ȯ�ϴ� �������Դϴ�.

	// int data = 10;

	// %p : ������ �ּҸ� ����ϴ� ���� ������
	// printf("data ������ �ּ� : %p", &data);
	// �������� �ּҰ��� �ش� ������ ������� �޸���
	// ���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1 byte
	// �� ũ��� ������ ǥ���մϴ�.

#pragma endregion

#pragma region sizeof() ������
	// ������ �޸� ũ�⸦ ��ȯ�ϴ� �������Դϴ�.

	// float health = 100.0f;
	// 
	// printf("int ������ �޸� ũ�� : %u\n", sizeof(int));
	// printf("float ������ �޸� ũ�� : %u\n", sizeof(health));

#pragma endregion

#pragma region ������
	// �޸��� �ּҰ��� ������ �� �ִ� �����Դϴ�.

	// int value = 100;
	// 
	// int * ptr = NULL;
	// 
	// ptr = &value;
	// 
	// printf("ptr�� �� : %p\n", ptr);
	// printf("ptr�� �޸� �ּ� : %p\n", ptr);
	// printf("value�� �޸� �ּ� : %p\n", value);

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ�
	// �ش� ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	// int attack = 50;
	// 
	// int* iptr = &attack;
	// 
	// printf("attack�� �� : %d\n", attack);
	// 
	// *iptr = 99;
	// 
	// printf("attack�� �� : %d\n", attack);

	// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
	// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� ��
	// �����Ƿ� �����Ͱ� ����Ű�� �޸��� �ڷ�����
	// �������־�� �մϴ�.

	// float damage = 7.5f;
	// 
	// int* ptr1 = &damage;
	// 
	// printf("ptr1 ������ ����Ű�� �� : %f", *ptr1);

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������
	// �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	// float* fptr = NULL;
	// 
	// printf("fptr ������  ������ �޸� ũ�� : %d\n", sizeof(fptr));

	// x = 66.75f;
	// y = 99.825f;

	// float* fptr = NULL;
	// float x = 0;
	// float y = 0;
	// 
	// fptr = &x;
	// 
	// *fptr = 66.75f;
	// 
	// fptr = &y;
	// *fptr = 99.825f;
	// 
	// printf("%f %f", x, y);

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� 
	// ó�� �� �� �ִ� ũ��� ��������, �� ���� ó�� �� �� �ִ�
	// ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ��� ���� ������
	// ������ ������ ����� �����Ͽ�, ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ �� 
	// ������ ������ �� �ֽ��ϴ�.

	// int a = 10;
	// int b = 20;
	// 
	// const int* cptr = NULL;
	// 
	// cptr = &a;
	// 
	// printf("cptr�� �� : %p\n", cptr);
	// // *cptr = 99;
	// 
	// cptr = &b;
	// printf("cptr�� �� : %p\n", cptr);

	// ����� ������ �����ʹ� �ش� ������ ���� ������ ��
	// ������, �ٸ� ������ �ּҴ� ����ų �� �ֽ��ϴ�.

#pragma endregion

#pragma region ������ ���ȭ

	// int v = 10;
	// int w = 200;
	// 
	// int* const reference = &v;
	// 
	// *reference = 100;
	// 
	// printf("v ������ �� : %d\n", v);

	// reference = \w;

	// ������ ���ȭ�� ���ο� �޸� �ּҸ�
	// ������ �� �����ϴ�.

#pragma endregion


}