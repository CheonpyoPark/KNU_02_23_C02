#include<stdio.h>

int main(void) {
	int jumsu;
	char grade;

	printf("Á¡¼öÀÔ·Â: ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90)
		grade = 'A';
	else if (jumsu >= 80)
		grade = 'B';
	else if (jumsu >= 70)
		grade = 'C';
	else if (jumsu >= 60)
		grade = 'D';
	else
		grade = 'F';
	printf("Á¡¼ö µî±Þ: %cÇÐÁ¡\n", grade);
	return 0;
	
}
