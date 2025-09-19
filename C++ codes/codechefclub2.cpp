#include<iostream>
using namespace std;

int main() {

    //enter numbers
    int a, b;
    cin>>a>>b;

    //swap
    int temp = a^b;
    a = temp^a;
    b = temp^b;

    //print numbers
    cout<<a<<" "<<b;

    return 0;
}