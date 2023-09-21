#include <stdio.h>

double calculator(int selector);
double sum(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);

int main(void) {
    int sel;
    printf("1 ���ϱ� 2 ���� 3 ���ϱ� 4 ������: ");
    scanf_s("%d", &sel);

    double result = calculator(sel);
    printf("���: %lf\n", result);

    return 0;
}

double calculator(int selector) {
    double num1, num2;
    printf("���� 1�� �Է��Ͻÿ�: ");
    scanf_s("%lf", &num1);
    printf("���� 2�� �Է��Ͻÿ�: ");
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
        printf("0���� ���� �� �����ϴ�.\n");
        return 0.0;
    }
    return num1 / num2;
}

