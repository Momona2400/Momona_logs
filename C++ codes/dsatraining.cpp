#include<iostream>
using namespace std;

int main() {
    int m1, n1, m2, n2;
    cin>>m1>>n1>>m2>>n2;
    int A[m1][n1], B[m2][n2], C[m1][n2];
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            cin>>A[i][j];
        }
    }
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            cin>>A[i][j];
        }
    }
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            
        }
    }

    return 0;
}