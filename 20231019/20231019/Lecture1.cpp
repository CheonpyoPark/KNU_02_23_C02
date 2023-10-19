#include <stdio.h>
#include <stdlib.h>

struct Student {
    int sno;
    char name[10];
    int score;
};

int main(void) {
    int STnum;
    printf("학생수 입력: ");
    scanf_s("%d", &STnum);

    struct Student* std;
    std = (struct Student*)malloc(sizeof(struct Student) * STnum);

    for (int count = 0; count < STnum; count++) {
        printf("학생# %d 학번입력: ", count + 1);
        scanf_s("%d", &(std[count].sno));

        printf("학생# %d 이름입력: ", count + 1);
        scanf_s("%s",std[count].name,10);

        printf("학생# %d 성적입력: ", count + 1);
        scanf_s("%d", &(std[count].score));
    }

    int sum = 0;
    for (int count = 0; count < STnum; count++) {
        sum += std[count].score;
    }
    printf("전체 학생 성적의 합: %d\n", sum);

    free(std);

    return 0;
}
