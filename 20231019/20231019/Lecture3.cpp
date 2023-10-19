#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE* fp = NULL;
	fopen_s(&fp,"data.txt","wt");

	fopen_s(&fp, "data.txt", "rt");

	fprintf(fp, "%d %d %d\n", 100, 200, 300);
	fprintf(fp, "%d %d %d\n", 400, 500, 600);
	int n1, n2, n3;
	while (fscanf(fp, "%d %d %d",&n1,&n2,&n3) != EOF) {
		printf("n1=%d, n2=%d, n3=%d\n", n1, n2, n3);
	}

	fclose(fp);
	return 0;
}