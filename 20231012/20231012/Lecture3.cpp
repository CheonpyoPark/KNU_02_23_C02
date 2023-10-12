#include<stdio.h>

int main(void) {
	int score[5] = { 87, 92, 89, 98, 78 };
	int cnt;
	//int* pscore = score+1;
	int* pscore = &score[1];
	printf("score[5]={87,92,,89,98,78}배열 요소 출력\n");

	for (cnt = 0;cnt < 3;cnt++) {
		printf("%d\n", *pscore);
		//printf("score[%d]=[%d]\n",cnt, *pscore);
		pscore++;
	}
	return 0;
}