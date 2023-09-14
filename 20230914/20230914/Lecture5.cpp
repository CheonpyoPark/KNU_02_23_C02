#include <stdio.h>

int main(void) {
    int num;
    char result;
    printf("정수입력: ");
    scanf_s("%d", &num);
    if (num % 2 == 0) {
        printf("짝수입니다.");
    }
    else {
        printf("홀수 입니다.");
    }
    return 0;
}
