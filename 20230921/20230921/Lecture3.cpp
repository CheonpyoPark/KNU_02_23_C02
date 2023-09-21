#include <stdio.h>

int fact(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return num * fact(num - 1);
    }
}

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf_s("%d", &num);

    if (num < 0) {
        printf("음수를 입력할 수 없습니다.\n");
    }
    else {
        unsigned long long result = fact(num);
        printf("%d\n", fact(num));
    }

    return 0;
}
