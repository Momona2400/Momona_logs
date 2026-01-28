#include<iostream>
using namespace std;

struct com {
    int real;
    int img;
};

com sum(com a, com b) {
    com c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

com sub(com a, com b) {
    com c;
    c.real = a.real - b.real;
    c.img = a.img - b.img;
    return c;
}

com mul(com a, com b) {
    com c;
    c.real = a.real*b.real - a.img*b.img;
    c.img = a.real*b.img + a.img*b.real;
    return c;
}

int main() {
    
    com a, b;
    cin>>a.real>>a.img;
    cin>>b.real>>b.img;

    return 0;
}