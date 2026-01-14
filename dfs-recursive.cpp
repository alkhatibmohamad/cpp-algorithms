#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> arr[200000];
bool visited[200000];
vector<int> dfs_path;

int n, m, a, b;
 
void dfs(int node);

int main(){

    
    scanf("%d%d", &n, &m);
    memset(visited, false, n);
    for(int i=0; i<m; i++){
        scanf("%d%d", &a, &b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    dfs(0);
    for(int i=0; i<n; i++){
        if(i == n-1){
            cout<<dfs_path[i];
            break;
        }
        cout<<dfs_path[i]<<"->";
    }


    return 0;

}


void dfs(int node){
    visited[node] = true;
    dfs_path.push_back(node);
    for(int i=0; i<arr[node].size(); i++){
        if(!visited[arr[node][i]])
            dfs(arr[node][i]);
    }
}