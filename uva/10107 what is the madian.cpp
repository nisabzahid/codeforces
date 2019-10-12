
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long i=1,t,a[1000];
    while(scanf("%lld",&a[i])!=EOF)
    {
        sort(a+1,a+i);
     if(i%2)cout<<a[(i/2)+1]<<" "<<(i/2)+1<<endl;
     else cout<<(a[(i/2)+1]+a[(i/2)])/2<<" "<<(i/2)+1<<endl;
     i++;
    }


    return 0;
}


