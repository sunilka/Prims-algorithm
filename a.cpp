#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nvertices;
    cout<<"Please enter the number of vertices :\n";
    cin>>nvertices;
    int a[nvertices][nvertices];
    cout<<"Please enter the adjacency matrix :\n";
    for(int i=0;i<nvertices;i++)
    {
        for(int j=0;j<nvertices;j++)
        {
            cin>>a[i][j];
        }
    }

    map<int,int> visited;
    queue<int> q;
    int u = 0;
    q.push(u);
    visited[u] = 1;
    int mincost=0;

    while(!q.empty())
    {
        int v;
        int tempmin = INT_MAX;

        if(visited.size() == nvertices)
        {
            break;
        }
        for(int j=0;j<nvertices;j++)
        {
            if( a[u][j] != 999 )
            {
                if( ! (visited.find(j) != visited.end()) )
                {
                    if( a[u][j] < tempmin)
                    {
                        tempmin = a[u][j];
                        v = j;
                    }
                }
            }
        }

        mincost += tempmin;
        u = v;
        visited[v] = 1;
        q.push(v);
        q.pop();
    }
    cout<<"The cost of the minimum spanning tree is : "<<mincost;
}
