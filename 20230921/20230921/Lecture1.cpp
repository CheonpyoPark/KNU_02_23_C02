#include<stdio.h>

int isPrime(int num) {
	for (int div = num - 1;div > 1;div--) {
		if (num % div == 0)return 0;
	}
	return 1;
}
int main(void) {
	int num;
	printf("수를 입력해주세요.");
	scanf_s("%d", &num);

	printf("%d\n", isPrime(num));
}