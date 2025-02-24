#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ROWS 10
#define ROW_LENGTH 50

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char const *argv[])
{
    char **nameOfStudents = (char**)calloc(ROWS, sizeof(char*));

    for (int i = 0; i < ROWS; i++) {
        nameOfStudents[i] = (char*)calloc(ROW_LENGTH, sizeof(char));
    }

    printf("Enter the name of students:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(nameOfStudents[i], ROW_LENGTH,stdin);
    }

    //printf("\nSize of %d divided by %d is: %d\n", sizeof(nameOfStudents), sizeof(nameOfStudents[0]), n);
    qsort(nameOfStudents, ROWS, sizeof(char*), compare);

    printf("\nNames of students in sorted order: \n");
    for (int i = 0; i < ROWS; i++) {
        printf("Name %d: %s", i + 1, nameOfStudents[i]);
    }

    for (int i = 0; i < ROWS; i++)
        free(nameOfStudents[i]);

    free(nameOfStudents);

    return 0;
}
