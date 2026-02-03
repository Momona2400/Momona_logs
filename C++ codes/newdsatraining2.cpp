//Adjency list of directed graph

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int v, e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;
    int i;
    vector<int> adj[v];
    for(i = 1; i <= e; i++) {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
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