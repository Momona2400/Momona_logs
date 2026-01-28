#include<iostream>
#include<algorithm>
using namespace std;

struct student {
    string name;
    int roll;
    int mark[6];
};

int main() {
    
    student s;
    int t;
    cin>>s.name;
    cin>>s.roll;
    for(int i = 0; i < 6; i++) {
        cin>>s.mark[i];
    }
    // for(int i = 6; i > 0; i--) {
    //     for(int j = 0; j < i-1; j++) {
    //         if(s.mark[j] < s.mark[j+1]) {
    //             t = s.mark[j];
    //             s.mark[j] = s.mark[j+1];
    //             s.mark[j+1] = t;
    //         }
    //     }
    // }

    sort(s.mark[0], s.mark[5]);

    if(s.mark[2] >= 95) {
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }

    return 0;
}