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

    printf("������ �Է��ϼ���: ");
    scanf_s("%d", &num);

    if (num < 0) {
        printf("������ �Է��� �� �����ϴ�.\n");
    }
    else {
        unsigned long long result = fact(num);
        printf("%d\n", fact(num));
    }

    return 0;
}
