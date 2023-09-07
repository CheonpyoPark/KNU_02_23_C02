#include <stdio.h>

int main()
{
	int num;
	printf("수를 압력하시오.");
	scanf_s("%d", &num);
	for (int num2 = 1; num2 <= num; num2++)
	{
		for (int num3 = num2; num3 <= num - 1; num3++)
		{
			printf(" ");
		}
		for (int num4 = 1; num4 <= 2 * num2 - 1; num4++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}