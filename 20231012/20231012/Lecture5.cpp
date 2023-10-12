#include <stdio.h>

void swap(int* pa, int* pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

void sort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main(void) {
    int array[] = { 70, 21, 19, 1, 5 };
    int size = sizeof(array) / sizeof(array[0]);
    printf("배열 정리 전: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    sort(array, size);
    printf("배열 정리 후: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
