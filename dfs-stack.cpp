#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m, a, b;
vector<int> g[200000];
stack<int> st;
bool visited[200000];
vector<int> dfs_path;

int main(){
    
    scanf("%d%d", &n, &m);
    memset(visited, false, n);
    for(int i=0; i<m; i++){
        scanf("%d%d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }        
    int source =1, current = -1;
    st.push(source);
    
    while(!st.empty()){
        current = st.top();
        if(!visited[current]){
            visited[current] = true;
            dfs_path.push_back(current);
            st.pop();
        }
        else{
            st.pop();
            continue;            
        }
        for(int i=0; i<g[current].size(); i++){
            if(!visited[g[current][i]]){
                st.push(g[current][i]);
            }
        }
    }

    for(int i=0; i<dfs_path.size(); i++){
        cout<<dfs_path[i];
        if(i < dfs_path.size() - 1){
            cout<<"->";
        }
    }
    return 0;
}