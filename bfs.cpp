#include<bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>> graph,int i,int n)
{
    vector<int> visited;
    fill(visited.begin(),visited.end(),0);
    visited[i]=1;
    
}

int main()
{
    vector<vector<int>> graph ;
   
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            
            int a;
            cin >> a;
            temp.push_back(a);
        }
        graph.push_back(temp);
    }
    int i =0;
    bfs(graph,i,n);
    return 0;
}