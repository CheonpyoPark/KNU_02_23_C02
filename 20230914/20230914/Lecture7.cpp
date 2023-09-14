#include<stdio.h>

int main(void) {
	char season;

	printf("봄:A또는 a\n");
	printf("여름:B또는 b\n");
	printf("가을:C또는 c\n");
	printf("겨울:D또는 d\n");
	printf("좋아하는 계절에 해당하는 알파벳을 압력하시오: ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("선택한 계절은 봄입니다.\n");
		break;
	case 'B':
	case 'b':
		printf("선택한 계절은 여름 입니다.\n");
		break;
	case 'C':
	case 'c':
		printf("선택한 계절은 가을 입니다.\n");
		break;
	case 'D':
	case 'd':
		printf("선택한 계절은 겨울 입니다.\n");
		break;
	default:
		printf("오류 발생!! 입력 가능 알파벳은 대소문자 A,B,C,D입니다.");
		break;


	}
}