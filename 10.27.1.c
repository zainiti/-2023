#include <stdio.h>

int main(void) 
{
	int a, b, surplus, result;

	//整数を入力する
	printf("整数１を入力してください: ");
	scanf_s("%d", &a);

	printf("整数2を入力してください:  ");
	scanf_s("%d", &b);

	//余りを計算
	surplus = a % b;

	//条件分岐
	if (surplus == 0)
	{
		result = a / b;
		printf("%d / %d = %d\n", a, b, result);
	}

	return 0;
}