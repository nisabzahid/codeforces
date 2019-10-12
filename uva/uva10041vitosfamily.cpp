
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int s,m=10000000,ma=-1;
        cin>>s;
        for(int j=0; j<s; j++)
        {
            int x;
            cin>>x;
            if(x>ma)ma=x;
            if(x<m)m=x;
        }
        cout<<ma-m<<endl;



    }


    return 0;
}
