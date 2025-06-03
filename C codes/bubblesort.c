#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i <n; i++) {
        for(int j = 0; j<n-i-1; j++) {
            int t;
            if(arr[j]>arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}