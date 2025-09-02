#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    cin>>n1>>n2;
    int a1[100], a2[100], a3[200];
    for(int i = 0; i < n1; i++) {
        cin>>a1[i];
    }
    for(int i = 0; i < n2; i++) {
        cin>>a2[i];
    }
    for(int i = n1-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            int t;
            if(a1[j] > a1[j+1]) {
                t = a1[j];
                a1[j] = a1[j+1];
                a1[j+1] = t;
            }
        }
    }
    for(int i = n2-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            int t;
            if(a2[j] > a2[j+1]) {
                t = a2[j];
                a2[j] = a2[j+1];
                a2[j+1] = t;
            }
        }
    }

    for(int i = 0, j = 0, k = 0; i < n1, j < n2, k < n1+n2; k++) {
        if(a1[i]<a2[j]) {
            a3[k] = a1[i];
            i++;
        }
        else {
            a3[k] = a2[j];
            j++;
        }
    }

    for(int i = 0; i < n1+n2; i++) {
        cout<<a3[i]<<" ";
    }

    return 0;
}