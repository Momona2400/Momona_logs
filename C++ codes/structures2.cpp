#include<iostream>
using namespace std;

struct time {
    int hr;
    int min;
    int sec;
};

int main() {
    
    time t1, t2, to;
    cin>>t1.hr>>t1.min>>t1.sec;
    cin>>t2.hr>>t2.min>>t2.sec;
    to.hr = t1.hr + t2.hr;
    to.min = t1.min + t2.min;
    to.sec = t1.sec + t2.sec;
    to.min += to.sec/60;
    to.sec %= 60;
    to.hr += to.min/60;
    to.min %= 60;
    cout<<to.hr<<endl<<to.min<<endl<<to.sec;

    return 0;
}