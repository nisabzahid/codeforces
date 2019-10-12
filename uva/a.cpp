#include<bits/stdc++.h>
using namespace std;
int x,y,ans;
int vis[21][21];
char grid[21][21],c;
int dfs(int a,int b)
{
    //cout<<" 1  ";
    if (vis[a+1][b]==0&&grid[a+1][b]=='.'&&a+1<y)
    {
       // cout<<a<<"   a  "<<b <<"   "<<endl;
        ans++;
        vis[a+1][b]=1;
        dfs(a+1,b);
    }
    if (vis[a-1][b]==0&&grid[a-1][b]=='.'&&a-1>=0)
    {
     //  cout<<a<<"  b  "<<b <<"   "<<endl;
        ans++;
        vis[a-1][b]=1;
        dfs(a-1,b);
    }
    if (vis[a][b+1]==0&&grid[a][b+1]=='.'&& b+1<x)
    {
     //   cout<<a<<"  c  "<<b <<"   "<<endl;
        ans++;
        vis[a][b+1]=1;
        dfs(a,b+1);
    }
    if (vis[a][b-1]==0&&grid[a][b-1]=='.'&&b-1>=0)
    {
       // cout<<a<<"  d  "<<b <<"   "<<endl;
        ans++;
        vis[a][b-1]=1;
        dfs(a,b-1);
    }


}



int main()
{
    int t,tc=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {


        cin>>x>>y;

        int s1,s2;
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<x; k++)
            {
                cin>> grid[j][k];

                if(       grid[j][k]=='@')
                {
                    s1=j;
                    s2=k;
                    ans=1;
                  //  cout<<j<<k<<grid[j][k]<<endl;
                }
            }
        }

        memset(vis,0,sizeof(vis));
        vis[s1][s2]=1;

        dfs(s1,s2);
        tc++;
        cout<<"Case "<<tc<<": "<<ans<<endl;
    }

    return 0;
}
