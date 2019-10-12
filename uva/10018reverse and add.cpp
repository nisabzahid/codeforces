#include<bits/stdc++.h>

using namespace std;
long long reverse(long long a)
{
    long long j=0;
    while(a)
    {
        j=(j*10)+a%10;
        a/=10;
    }


    return j;
}


int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        long long k=a;
        long long g=0;
        int c=0;
        while(k!=reverse(k))
        {
            k+=reverse(k);

            c++;
        }
        cout<<c<<" "<<k<<endl;



    }


    return 0;
}
