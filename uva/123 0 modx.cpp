#include<bits/stdc++.h>
using namespace std;

int mod(long long x,long long n,long long m)
{
    if(!n)return 1;
    else if(n%2)return (x%m)*mod(x,n-1,m)%m;
    else
    {
        long long d=mod(x,n/2,m)%m;

        return ((d%m)*(d%m))%m;
    }
}


int main ()
{
    int t;
    while(cin>>t)
    {
        if(!t)break;
        for (int i=0; i<t; i++)
        {
            long long a,b,c;
            cin>>a>>b>>c;
            cout<<mod(a,b,c)<<endl;
        }
    }
    return 0;
}
