#include <stdio.h>

int main(void) {

	int n;

	printf("整数を入力してください。\n");
	scanf_s("%d", &n);

	if (n % 2 == 1) {
		printf("奇数\n");
	}
	else {
		printf("偶数\n");
	}

	return 0;
}