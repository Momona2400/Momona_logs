#include <iostream>
#include <stack>
#include <cctype>  // for isdigit() and isalpha()
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

// Function to perform infix to postfix conversion
string infixToPostfix(const string& infix) {
    stack<char> st;
    string postfix = "";

    for(char ch : infix) {
        if(isalnum(ch)) {  // Operand
            postfix += ch;
        }
        else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();  // pop '('
        }
        else {  // Operator
            while(!st.empty() && precedence(st.top()) >= precedence(ch)) {
                if(ch == '^' && st.top() == '^') break; // right-associative
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    // Pop remaining operators from the stack
    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}