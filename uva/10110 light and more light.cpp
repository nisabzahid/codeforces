#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n,r;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        r=sqrt(n);
        if(r*r==n)
            printf("yes\n");
        else
            printf("no\n");
    }
}

