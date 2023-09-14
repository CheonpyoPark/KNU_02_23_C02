#include<stdio.h>

int main() {
	int num, num2;

	for (num = 0; num < 5; num++) {
		for (num2 = 0;num2 < num;num2++) {
			printf("	");
		}
		if (num % 2 == 0) printf("|O|");
		else printf("|X|");
		{
			printf("\n-------------------------\n");
		}
	}
	return 0;
}