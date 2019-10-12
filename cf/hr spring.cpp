#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,a[100002]= {0},mx=0,d;
    cin>>s>>d;
    long long k;
    d*=2;
    for(int i=0; i<s; i++)
    {
        cin>>k;
        a[k]=1;
        if(k>mx)
        {
            mx=k;
        }
    }
    long long ans=0;
    for(long long j=1; j<100002;j++)
    {
        if(1==a[j])
        {
            j+=d;
            ans++;
            cout<<j<<" "<<ans<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
