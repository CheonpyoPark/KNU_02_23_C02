#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int STnum=NULL, count=0;
	int* score;
	score = (int*)malloc(sizeof(int)*STnum);
	printf("�л��� �Է�:");
	scanf_s("%d" , &STnum);


	for (count= 0;count<STnum;count++) {
		printf("�л�# %d-%d �����Է�: ",STnum, count + 1);
		scanf_s("%d", score+count);
	}
	int sum = 0;
	for (int count = 0;count < STnum;count++) {
		sum += score[count];
	}
	printf("%d\n",sum);

}