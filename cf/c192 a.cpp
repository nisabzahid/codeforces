
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y; while(cin>>x>>y)
    {
        char a[x][y],c;
        int n_r[11]={0},n_c[11]={0};
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                cin>>a[i][j]; c=a[i][j];
                if(c=='S')
                {
                    n_r[i]=1;n_c[j]=1;
                }
            }
        }
        int count=0;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                c=a[i][j];
                if(c!='S')
                {
                    if(n_r[i]!=1) count++;
                    else if(n_c[j]!=1) count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
