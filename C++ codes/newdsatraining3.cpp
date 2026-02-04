//BSF of undirected graph

#include<iostream>
#include<vector>
#include<queue>

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
        adj[b].push_back(a);
    }
    for(int i = 0; i < v; i++) {
        cout<<i<<": ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    queue<int> q;
    vector<int> status(v, 0);
    q.push(0);
    status[0] = 1;
    while(!q.empty()) {
        int x = q.front();
        for(int i = 0; i < adj[x].size(); i++) {
            int y = adj[x][i];
            if(status[y] == 0) {
                q.push(y);
                status[y] = 1;
            }
        }
        cout<<x<<" -> ";
        q.pop();
    }

    return 0;
}