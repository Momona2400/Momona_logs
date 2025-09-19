#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v1 = {1,2,3};
    cout<<v1.capacity()<<endl;
    cout<<v1.size()<<endl;
    v1.push_back(9);
    // v1.push_back(9);
    // v1.push_back(9);
    // v1.push_back(9);
    cout<<v1.capacity()<<endl;
    cout<<v1.size()<<endl;
    // v1.insert(v1.begin(), 4);
    // for(int i = 0 ; i < v1.size(); i++) {
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;
    // v1.erase(v1.begin());
    // for(int i = 0 ; i < v1.size(); i++) {
    //     cout<<v1[i]<<" ";
    // }

    return 0;
}