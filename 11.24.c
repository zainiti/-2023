#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[16];//大文字

	printf("パスワードを入力してください>>>");
	scanf("%5s", a);

	int upperCaseCount1 = 0;
	int upperCaseCount2 = 0;
	int upperCaseCount3 = 0;
	for (int i = 0; i < 16; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			upperCaseCount1++;
		}
		if (a[i] >= 'a' && a[i] <= 'z') {
			upperCaseCount2++;
		}
		else
		{
			upperCaseCount3++;
		}
	}
	int total = upperCaseCount1 + upperCaseCount2 + upperCaseCount3;

	if (total >= 8 && total <= 16 && upperCaseCount1 > 0 && upperCaseCount2 > 0 && upperCaseCount3 > 0)
	{
		printf("条件を満たしていて、安全性が高いパスワードです。\n");
	}
	else
	{
		printf("条件を満たしていません。\n");

	}


	return 0;
}
