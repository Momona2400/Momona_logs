#include<iostream>
#include<vector>
using namespace std;


//roatating matrix by 90 degree
int main() {
    int n;
    cin>>n;
    vector<vector<int>> pro(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>pro[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int t;
            t = pro[i][j];
            pro[i][j] = pro[j][i];
            pro[j][i] = t;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<pro[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> result(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = n-1, k = 0; j > 0, k < n; j--, k++) {
            result[i][k] = pro[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}