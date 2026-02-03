#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    int v, e;
    cin>>v;
    cin>>e;
    int i;
    vector<int> adj[v];
    for(i = 1; i <= e; i++) {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i < v; i++) {
        cout<<i<<": ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}