
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int c,d;
    while( cin>>c>>d)
    {
        int a=240;

        a=240-d;
        int x=0,i;
        for( i=1;a>(i+1)*5; i++)
        {
            x+=i*5;
            a-=x;
           // cout<<i<<" "<<x<<" "<<a<<endl;

        }
        cout<<i<<endl;
    }
    return 0;
}
