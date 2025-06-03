#include<stdio.h>
void main() {
    int sum = 0, i = 3;
    printf("2\n");
    while(1) {
        int total = 0;
        for(int j = 1; j <= i; j++) {
            if(i%j == 0)
            total++;
        }
        if(total == 2) {
            printf("%d\n", i);
            sum++;
        }
        i++;
        if(sum == 49)
        break;
    }
}