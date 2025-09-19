#include<iostream>
#include<vector>
using namespace std;


//roatating matrix by 90 degree
int main() {
    //input number of rows and column
    int n;
    cin>>n;

    //input matrix
    vector<vector<int>> pro(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>pro[i][j];
        }
    }

    //transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int t;
            t = pro[i][j];
            pro[i][j] = pro[j][i];
            pro[j][i] = t;
        }
    }

    //print transpose matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<pro[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //rotating left 
    vector<vector<int>> result1(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = n-1, k = 0; j > 0, k < n; j--, k++) {
            result1[i][k] = pro[i][j];
        }
    }

    //printing
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<result1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //transposing again
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int t;
            t = result1[i][j];
            result1[i][j] = result1[j][i];
            result1[j][i] = t;
        }
    }


    //rotating again
    vector<vector<int>> result2(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = n-1, k = 0; j > 0, k < n; j--, k++) {
            result2[i][k] = result1[i][j];
        }
    }

    //print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<result2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}