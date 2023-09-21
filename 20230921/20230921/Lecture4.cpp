#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void) {
    int per = 0;
    double x = 0;
    double y = 0;
    double count = 0, circle = 0;

    srand(time(NULL));

    while (count < 10000) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        count++;
        if ((x * x) + (y * y) <= 1) {
            circle++;
        }
        printf(" %.2lf%% ¿Ï·áµÊ: %.5lf", (count) / 100, (circle / count) * 4);
        for (int a = 0; a < per; a += 5) {
            printf("¡á");
        }
        printf("\n");
    }
    return 0;
}
