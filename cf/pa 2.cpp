#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main ()
{
    long long int t,n;
    cin>>t;
    for(long long i=0; i<t; i++)
    {
        long long a,b=0;
        cin>>a;
        long long s[a];
        for(long long j=0; j<a; j++)
        {
            cin>>s[j];
            b=b+s[j];

        }
        sort(s,s+a);
        bool d=true;
        for(long long k=s[0]; k>=1; k--)
        {
            for(long long m=0; m<a; m++)
            {
                if(s[m]%k!=0)
                {
                    break;
                }
                if(m==a-1&&s[m]%k==0)
                {

                    long long h=b/k;
                    cout<<k<<" "<<h<<endl;
                    d=false;
                    break;
                }
            }
            if(d==false)
            {
                break;
            }
        }
//        if(d==true)
//        {
//            cout<<1<<" "<<b<<endl;
//        }
    }
    return 0;
}
