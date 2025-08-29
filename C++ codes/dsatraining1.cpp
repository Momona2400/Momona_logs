#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> A;
    cout<<A.size()<<endl;
    // A.push_back(10);
    // A.push_back(677);
    // for(int x : A) {
    //     cout<<x<<endl;
    // }
    A.push_back(10);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(20);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(7);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(1);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(50);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(330);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(27);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    A.push_back(19);
    // cout<<A.size()<<" "<<A.capacity()<<endl;
    sort(A.begin(), A.end());
    for(int x : A) {
        cout<<x<<endl;
    }

    return 0;
}