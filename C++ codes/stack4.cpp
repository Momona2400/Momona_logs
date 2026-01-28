#include<iostream>
using namespace std;

char stack[100], top = -1;

void push(char val) {
    if(top == 99) 
    cout<<"Overflow"<<endl;
    else {
        top++;
        stack[top] = val;
    }
}

void pop() {
    if(top == -1)
    cout<<"Underflow"<<endl;
    else
    top--;
}

void show() {
    if(top == -1) {
        cout<<"Stack is empty";
    }
    else {
        cout<<"The array: "<<endl;
        for(int i = top; i >=0; i--) {
            cout<<stack[i]<<endl;
        }
    }
}

void dectox(int n, int x) {
    while(n != 0) {
        int d = n%x;
        if(d >= 0 && d < 10) {
            push(d+48);
        }
        else {
            push(d+55);
        }
        n /= x;
    }
}

int main() {
    int decimal, base;
    cout << "Enter decimal number: ";
    cin >> decimal;
    cout << "Enter base (2 - 16): ";
    cin >> base;

    dectox(decimal, base);
    show();

    return 0;
}