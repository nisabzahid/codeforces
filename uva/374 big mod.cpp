#include<bits/stdc++.h>

using namespace std;
int bigmod(long long a,long long b,long  long c)
{
    if(b==0)return 1;
    else if(b%2)return (a%c)*bigmod(a,b-1,c)%c;
    else
    {
        long long d=bigmod(a,b/2,c)%c;
        return ((d%c)*(d%c))%c;
    }

}

int main()
{
    long long x,n,m;
    while   (cin>>x>>n>>m)
    {
        cout<<bigmod(x,n,m)<<endl;
    }
    return 0;
}


