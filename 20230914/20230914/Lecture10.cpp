#include <stdio.h>

int main(void) {
    int i, b;

    for (i = 2; i <= 9; i++) {
        if (i == 5) continue;
        for (b = 1; b <= 9; b++) {
            printf("%d * %d = %d\n", i, b, i * b);


        }
    }
    return 0;
}
