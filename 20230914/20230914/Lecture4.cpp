#include<stdio.h>

int main(void) {
	int num,year;
	printf("������ �Է����ּ���.");
	scanf_s("%d", &year);
	num = (year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0);
	if (num==1)
	{
		printf("%d���� �����Դϴ�.",year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.",year);
	}
	return 0;
}