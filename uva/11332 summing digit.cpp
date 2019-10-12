
#include<bits/stdc++.h>

using namespace std;
long long add(long long n)
{

    long long j=0;
    while(n!=0)
    {
        j+=n%10;
        n/=10;
    }
    n=j;
    return n;
}
int main()
{
    long long n,r;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        while(n/10!=0)
        {
            n=add(n);
        }
        cout<<n<<endl;
    }
}

