#include <stdio.h>

int main(void) 
{
	int a, b, surplus, result;

	//®”‚ğ“ü—Í‚·‚é
	printf("®”‚P‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
	scanf_s("%d", &a);

	printf("®”2‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:  ");
	scanf_s("%d", &b);

	//—]‚è‚ğŒvZ
	surplus = a % b;

	//ğŒ•ªŠò
	if (surplus == 0)
	{
		result = a / b;
		printf("%d / %d = %d\n", a, b, result);
	}

	return 0;
}