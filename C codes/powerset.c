#include<stdio.h>
#include<math.h>

void main() {
    int n;
    scanf("%c", &n);
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
    }
}