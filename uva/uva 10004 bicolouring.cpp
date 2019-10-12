#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    vector<int>v[200];
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        int e;
        scanf("%d",&e);
        for(int i=1; i<=e; i++)
        {
            int k,p;
            scanf("%d%d",&k,&p);
            v[k].push_back(p);
            v[p].push_back(k);

        }
        queue<int>q;
        int vis[202]= {0};
        q.push(v[0][0]);
        while(!q.empty())
        {
            int current=q.pop();
            vis[current]=1;
            for(int j=0; j<v[currrent].size(); j++)
            {
                if(vis[j]!=1)
                {
                    q.push(v[current][j]);

                }
            }


        }




    }
    return 0;

}
