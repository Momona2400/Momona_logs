#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int min, t, j=0, k;
    while(j<n-2) {
        min = arr[j];
        for(int i = j+1; i<n; i++) {
            if(min>arr[i]) {
                min = arr[i];
                k = i;
            }
        }
        t = arr[j];
        arr[j] = min;
        arr[k] = t;
        j++;
        for(int g=0; g<n; g++) {
            printf("%d ", arr[g]);
        }
        printf("\n");
    }
}