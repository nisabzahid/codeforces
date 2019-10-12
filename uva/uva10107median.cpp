

#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long a[100000];
    long long x,i=0;
    while(cin>>x)
    {
        long  long med;
        a[i]=x;
        sort(a,a+i+1);
        for(int p=0;p<=i;p++){cout<<a[p]<<" ";}
        if(i%2==0)
             med=a[i/2];
        else
        {
             med=(a[i/2]+a[i/2+1])/2;
        }
        cout<<med<<endl;

        i++;
    }

    return 0;
}
