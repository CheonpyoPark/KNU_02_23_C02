#include <stdio.h>
#include <stdlib.h>

struct Student {
    int sno;
    char name[10];
    int score;
};

int main(void) {
    int STnum;
    printf("�л��� �Է�: ");
    scanf_s("%d", &STnum);

    struct Student* std;
    std = (struct Student*)malloc(sizeof(struct Student) * STnum);

    for (int count = 0; count < STnum; count++) {
        printf("�л�# %d �й��Է�: ", count + 1);
        scanf_s("%d", &(std[count].sno));

        printf("�л�# %d �̸��Է�: ", count + 1);
        scanf_s("%s",std[count].name,10);

        printf("�л�# %d �����Է�: ", count + 1);
        scanf_s("%d", &(std[count].score));
    }

    int sum = 0;
    for (int count = 0; count < STnum; count++) {
        sum += std[count].score;
    }
    printf("��ü �л� ������ ��: %d\n", sum);

    free(std);

    return 0;
}
