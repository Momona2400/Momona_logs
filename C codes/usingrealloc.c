#include<stdio.h>
#include<stdlib.h>
void main() {
    int *ptr;
    int i, j, c = 0;
    ptr = (int*)malloc(5*sizeof(int));
    for(i = 1, j = 0; c <=5; i++) {
        if(i%2 != 0) {
            c++;
            ptr[j] = i;
            j++;
        }
    }
    for(i = 0; i<5; i++) {
        printf("%d\t", ptr[i]);
    }
    ptr = realloc(ptr, 6*sizeof(int));
    c = 0;
    for(i = 1, j = 0; c <=6; i++) {
        if(i%2 == 0) {
            c++;
            ptr[j] = i;
            j++;
        }
    }
    for(i = 0; i<6; i++) {
        printf("%d\t", ptr[i]);
    }
}