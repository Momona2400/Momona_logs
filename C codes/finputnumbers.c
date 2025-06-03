#include<stdio.h>
void main() {
    FILE *fptr;
    fptr = fopen("textfile.txt", "r");
    int n;
    for(int i = 0; i < 5; i++) {
        fscanf(fptr, "%d", &n);
        printf("%d", n);
    }
}