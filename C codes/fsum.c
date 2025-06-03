#include<stdio.h>

void main() {
    FILE *fptr, *fptr2;
    int a, b;
    fptr = fopen("textfile3.txt", "r");
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr2 = fopen("textfile3.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr2);
}