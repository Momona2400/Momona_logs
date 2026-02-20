#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
    
    queue<pair<int, int>> q;
    q.push(make_pair(4, 5));
    q.push(make_pair(4, 5));
    q.push(make_pair(4, 5));
    q.push(make_pair(4, 5));
    q.push(make_pair(4, 5));
    while(!q.empty()) {
        pair<int, int> p;
        p = q.front();
        cout<<p.first;
        cout<<p.second<<endl;
        q.pop();
    }

    return 0;
}