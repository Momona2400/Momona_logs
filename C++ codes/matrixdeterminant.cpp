#include<iostream>
#include<math.h>
using namespace std;

int det(int mat[10][10], int n) {
    if(n==1) {
        return mat[0][0];
    }
    if(n==2) {
        return mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    }
    int detr = 0;
    for(int k = 0; k < n; k++) {
        int temp[10][10], e = 0, f = 0;
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n; j++) {
                if(j==k) {
                    continue;
                }
                temp[e][f] = mat[i+1][j];
                if(f<n-2) {
                    f++;
                }
                else {
                    e++;
                    f = 0;
                }
            }
        }
        detr+= pow(-1, k) * mat[0][k] * det(temp, n-1);
    }
    return detr;
}

int main() {
    
    int mat[10][10] = {{2,0,0,0,0,0,0}, {0,3,0,0,0,0,0}, {0,0,5,0,0,0,0}, {0,0,0,7,0,0,0}, {0,0,0,0,11,0,0}, {0,0,0,0,0,13,0}, {0,0,0,0,0,0,17}};
    cout<<det(mat, 7);

    return 0;
}