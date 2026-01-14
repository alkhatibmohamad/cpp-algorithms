#include <iostream>
#include <bits/stdc++.h>

using namespace std;


vector<int> arr[200000];
bool visited[200000];
vector<int> bfs_path;
queue<int> q;

int n, m, a, b;
void bfs(int node);

int main(){
    scanf("%d%d", &n, &m);
    for(int i=0; i<m; i++){
        scanf("%d%d", &a, &b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    bfs(0);
    for(int i=0; i<bfs_path.size(); i++){
        if(i ==  bfs_path.size() - 1){
            cout<<bfs_path[i]<<endl;
            break;
        }
        cout<<bfs_path[i]<<"->";
    }
}

void bfs(int node){
    visited[node] = true;
    bfs_path.push_back(node);
    for(int i=0; i<arr[node].size(); i++){
        if(!visited[arr[node][i]])
            q.push(arr[node][i]);
    }
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        bfs(cur);
    }
}