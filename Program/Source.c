
#include <stdio.h>

int itemCode;

int level = 1;

void Stage()
{
    level += 1;
}

void Score()
{
    // ���� ������ �� �ѹ��� �ʱ�ȭ��
    // �̷������ �����Դϴ�.
    static int score = 0;

    score++;

    printf("score ������ �� : %d\n", score);
}

//void Fun(num)
//{
//    if (num <= 2)
//    {
//        return (num);
//    }
//    for (int i = 2; i <= num; i++)
//    {
//        while (num % i == 0)
//        {
//
//        }
//    }
//}

int main()
{
#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ { } �������� ����
    // �� �� ������, { }�� ����� �޸𸮿��� �������
    // Ư¡�� ������ �ֽ��ϴ�.
    
    //int data = 100;
    
    //{
    //	int data = 200;
    
    //	// ���� ����� ��ġ�� �ִ� data ������ �����մϴ�.
    //	printf("data ������ �� : %d\n", data);
    //}
    //printf("data ������ �� : %d\n", data);
#pragma endregion

#pragma region ���� ����
    // �Լ� �ܺο� ����� ������, ��𿡼����� ������ �����ϸ�
    // ���α׷��� ����� �� �����ǰ� ���α׷��� ����� �� �޸�
    // ���� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

    // Stage();
    // 
    // printf("level ������ �� : %d\n", level);
    // printf("itemCode ������ �� : %d\n", itemCode);

#pragma endregion

#pragma region ���� ����
    // static�̶�� Ű���带 ����ϰ� ���� ������ Ư���� �����鼭,
    // ���� ������ Ư¡�� ������ �ִ� �����Դϴ�.


#pragma endregion

#pragma region ���μ�����
    int num = 0;
    scanf_s("%d", &num);
    if (num <= 2)
    {
        printf("%d", num);
    }
    else 
    {
        printf("%d = ", num);
        for (int i = 2; num != 1; i++)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
                num = num / i;
                if (num % i == 0)
                {
                    i--;
                }
            }
        }
    }
    

#pragma endregion


}