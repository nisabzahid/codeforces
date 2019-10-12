#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x[10000]= {0};
    for(int i=0; i=1000; i++)
    {
        x[b+((i-1)*a)]=1;
        cout<<b+((i-1)*a)<<endl;

    }
    for(int i=0; i=1000; i++)
    {
        if( x[d+(i-1)*c]==1)
        {
            cout<<d+(i-1)*c<<endl;
            return 0;
        }
    }
cout<<-1<<endl;


    return 0;
}
