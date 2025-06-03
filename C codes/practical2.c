#include<stdio.h>

struct student {
    char name[20];
    int roll;
    float cgpa;
}s[3];

void main() {
    int i;
    for(i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i+1);
        gets(s[i].name);
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll);
        printf("Enter cgpa of student %d: ", i+1);
        scanf("%f", &s[i].cgpa);
        printf("\n");
    }
    for(i = 0; i < 3; i++) {
        printf("Name of student %d is ", i+1);
        puts(s[i].name);
        printf("\nRoll number of student %d is ", i+1);
        printf("%d", s[i].roll);
        printf("\nCgpa of student %d is ", i+1);
        printf("%f", s[i].cgpa);
    }
}