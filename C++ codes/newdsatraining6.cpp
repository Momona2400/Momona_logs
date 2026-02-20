#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
    
    vector<pair<int, string>> v;
    v.push_back(make_pair(3, "oranges"));
    v.push_back(make_pair(5, "apples"));
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i].first<<endl;
        cout<<v[i].second<<endl;
    }

    return 0;
}