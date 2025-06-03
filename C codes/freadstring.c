#include<stdio.h>
void main() {
    FILE *fptr;
    char ch;
    fptr = fopen("string.txt", "r");
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}