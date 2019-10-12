#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        bool flag=true;
        if(n==0)return 0;
        vector<int> a[n];
        int vis[205]= {0};
        int col[205]={0};
        vis[0]=1;
        col[0]=1;

        int e;
        cin>>e;
        for(int i=0; i<e; i++)
        {
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);

        }

        queue <int>q;
        q.push(0);
        while(!q.empty()&&flag)
        {

            int f=q.front();
            q.pop();
//            cout<<" front  "<<f<<endl;
            for(int i=0; i<a[f].size(); i++)
            {
                if(vis[a[f][i]]==0)
                {

                    int v=a[f][i];
                    vis[v]=1;
                    col[v]=col[f]+1;
                    q.push(v);
                   // cout<<v<<" ";;
                }
                else if(col[a[f][i]]%2==col[f]%2)    flag =false;



            }
        }

        if(flag)cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }


    return 0;
}
