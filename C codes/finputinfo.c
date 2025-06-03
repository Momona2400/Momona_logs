#include<stdio.h>
void main() {
    FILE *fptr;
    fptr = fopen("textfile2.txt", "w");
    printf("enter name of student: ");
    char name[19];
    gets(name);
    fprintf(fptr, "%s", name);
    int roll;
    printf("enter roll: ");
    scanf("%d", &roll);
    fprintf(fptr, "%d", roll);

    fclose(fptr);

}