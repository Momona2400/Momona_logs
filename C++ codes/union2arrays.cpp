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
    int k;
    for(k = 0; k < n1; k++) {
        a3[k] = a1[k];
        cout<<a3[k]<<" ";
    }
    for(int j = 0; j < n2; j++) {
        int i;
        for(i = 0; i < n1; i++) {
            if(a2[j] == a1[i]) {
                break;
            }
        }
        if(i == n1) {
            a3[k] = a2[j];
            cout<<a3[k]<<" ";
            k++;
        }
    }
    
    // for(int i = 0; i < n1+n2; i++) {
    //     cout<<a3[i]<<" ";
    // }

    return 0;
}