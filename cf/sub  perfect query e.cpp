#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a;
    cin>>a;
    long long g[a+1],x[a+1],y[a+1],z[a+1];
    for(int i=1; i<=a; i++)
    {
        cin>>g[i];
        if(i!=1)
        {
            x[i]=x[i-1]^g[i];
            y[i]=y[i-1]&g[i];
            z[i]=z[i-1]|g[i];
        }
        else
        {
            x[i]=g[i];
            y[i]=g[i];
            z[i]=g[i];
        }


    }
    long long q;
    cin>>q;
    for(int j=0; j<q; j++)
    {
        int p,t;
        string s;
        cin>>p>>s>>t;
        int ans=0;
        if(s=="AND")
//        {int d=!

            ans=y[t] & y[p-1];
        }
        else if(s=="OR")
        {
            ans=z[t]!|z[p-1];
        }
        else if(s=="XOR")
        {
            ans=x[t]!^x[p-1];
        }



        cout<<ans<<endl;
    }

    return 0 ;
}

