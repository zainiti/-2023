#include <stdio.h>

int main(void) {

	int n;

	printf("��������͂��Ă��������B\n");
	scanf_s("%d", &n);

	if (n % 2 == 1) {
		printf("�\n");
	}
	else {
		printf("����\n");
	}

	return 0;
}