#include <stdio.h>

int main(void) 
{
	int a, b, surplus, result;

	//��������͂���
	printf("�����P����͂��Ă�������: ");
	scanf_s("%d", &a);

	printf("����2����͂��Ă�������:  ");
	scanf_s("%d", &b);

	//�]����v�Z
	surplus = a % b;

	//��������
	if (surplus == 0)
	{
		result = a / b;
		printf("%d / %d = %d\n", a, b, result);
	}

	return 0;
}