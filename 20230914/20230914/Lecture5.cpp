#include <stdio.h>

int main(void) {
    int num;
    char result;
    printf("�����Է�: ");
    scanf_s("%d", &num);
    if (num % 2 == 0) {
        printf("¦���Դϴ�.");
    }
    else {
        printf("Ȧ�� �Դϴ�.");
    }
    return 0;
}
