
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int x[101]= {0};

    for(int i=0; i<a; i++)
    {
        int c,d;
        cin>>c>>d;
        for(int j=d; j>=c; j--)
        {
            if(i==0)x[i]=0;
            else if(j-1>c)
            {
                x[j]=j;
            }
            //cout<<j;
        }
        // cout<<endl;
    }

    for(int i=0; i<=b; i++)
    {
        if(x[i]!=i)
        {
            cout<<"NO\n"<<i;
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
