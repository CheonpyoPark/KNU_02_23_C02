#include<stdio.h>

int main(void) {
	char season;

	printf("��:A�Ǵ� a\n");
	printf("����:B�Ǵ� b\n");
	printf("����:C�Ǵ� c\n");
	printf("�ܿ�:D�Ǵ� d\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ��� �з��Ͻÿ�: ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("������ ������ ���Դϴ�.\n");
		break;
	case 'B':
	case 'b':
		printf("������ ������ ���� �Դϴ�.\n");
		break;
	case 'C':
	case 'c':
		printf("������ ������ ���� �Դϴ�.\n");
		break;
	case 'D':
	case 'd':
		printf("������ ������ �ܿ� �Դϴ�.\n");
		break;
	default:
		printf("���� �߻�!! �Է� ���� ���ĺ��� ��ҹ��� A,B,C,D�Դϴ�.");
		break;


	}
}