#include<iostream>
using namespace std;

struct cus {
    string name;
    int num;
    float bal;
};

void less(cus a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i].bal < 200) {
            cout<<a[i].name<<endl;
        }
    }
}

void ad(cus a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i].bal > 1000) {
            a[i].bal += 100;
            cout<<a[i].bal<<endl;
        }
    }
}

int main() {
    

    return 0;
}