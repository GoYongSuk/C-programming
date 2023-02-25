#include <stdio.h>
#define SIZE 3

typedef struct {
    char name[10];
    double grade;
} STUDENT;

void swap(STUDENT*, STUDENT*);

int main(void) {
    STUDENT man[SIZE] = { {"고용석", 60.2}, {"한우리", 70.5}, {"함대길", 20.3} };

    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (man[i].grade < man[j].grade) {
                swap(&man[i], &man[j]);
            }
        }
    }

    printf(" 이름 \t성적\n", man[i].name, man[i].grade);
    for (i = 0; i < 3; i++) {
        printf("%s %5.1f\n", man[i].name, man[i].grade);
    }

    return 0;
}

void swap(STUDENT* mani, STUDENT* manj) {
    STUDENT temp;
    temp = *mani;
    *mani = *manj;
    *manj = temp;
}