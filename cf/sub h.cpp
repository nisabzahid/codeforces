

#include<bits/stdc++.h>

using namespace std;
    long long g[1001][1001]= {{0},{0}};

int main()
{
    long long a,b;
    cin>>a>>b;

    for(int i=0; i<b; i++)
    {
        int x,y;
        cin>>x>>y;
        if(g[x][y]==1)
        {
            cout<<"old"<<endl;
        }
        else
        {
            cout<<"new"<<endl;
            g[x][y]=1;
            g[y][x]=1;
        }
    }

    return 0;
}

