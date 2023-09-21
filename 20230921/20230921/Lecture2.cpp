#include <stdio.h>

double calculator(int selector);
double sum(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);

int main(void) {
    int sel;
    printf("1 더하기 2 빼기 3 곱하기 4 나누기: ");
    scanf_s("%d", &sel);

    double result = calculator(sel);
    printf("결과: %lf\n", result);

    return 0;
}

double calculator(int selector) {
    double num1, num2;
    printf("숫자 1을 입력하시오: ");
    scanf_s("%lf", &num1);
    printf("숫자 2를 입력하시오: ");
    scanf_s("%lf", &num2);

    if (selector == 1)
        return sum(num1, num2);
    else if (selector == 2)
        return sub(num1, num2);
    else if (selector == 3)
        return mul(num1, num2);
    else if (selector == 4)
        return div(num1, num2);

    return 0.0;
}

double sum(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mul(double num1, double num2) {
    return num1 * num2;
}

double div(double num1, double num2) {
    if (num2 == 0.0) {
        printf("0으로 나눌 수 없습니다.\n");
        return 0.0;
    }
    return num1 / num2;
}

