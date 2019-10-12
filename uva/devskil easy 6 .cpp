
#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        unsigned long long a,b,c,s=0;
        cin>>a;
        b=(a*(a+1)*a*(a+1))/4;
        for(int i=1; i<=a; i++)
        {
            s+=i*i;
        }
        unsigned long long g=max(s,b)-min(s,b);

        cout<<g<<endl;

    }
    return 0;

}
