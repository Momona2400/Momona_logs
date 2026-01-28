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

bool chpth(string s) {
    char ch;
    for(int i = 0; i < s.length(); i++) {
        ch = s[i];
        if(ch == '(') {
            push(ch);
        }
        else if(ch == ')') {
            if(top == -1) {
                return false;
            }
            pop();
        }
    }
    if(top == -1) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string expr;
    cout << "Enter an arithmetic expression: ";
    cin >> expr;

    if(chpth(expr))
        cout << "Expression is VALID" << endl;
    else
        cout << "Expression is INVALID" << endl;

    return 0;
}