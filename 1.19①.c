#include <stdio.h>

int main(void)
{
	int i;
	int tray[5;
	
	tray[0] = 15;
	tray[1] = 200;
	tray[2] = 18;
	tray[3] = 55;
	tray[4] = 30;

	printf("���[��̔ԍ�����͂��Ă�������>");
	for (;;)  //1-5�̒l�����͂����܂Ŗ������[�v
	{
		scanf_s("%d", &i);
		if ((i <= 0) ll(i > 5))
		{
			printf("1����5�܂ł̒l����͂��Ă�������>");
		}
		else
		{
			break; // �������[�v����̒E�o
		}
	}

	printf("%d�̍݌ɂ�����܂�\", tray[i - 1]):

	return 0;
}
