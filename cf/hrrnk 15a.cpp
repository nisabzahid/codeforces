#include<iostream>
#include<vector>#include<stdlib.h>
#include<cmath>
using namespace std;


int main()
{

    long long t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        int x=abs(b-c);
        int y=abs(a-c);
        if(x<y)
        {
            cout<<"Cat B";
        }
        else if(x==y)
        {
            cout<<"Mouse C";
        }
        else cout<<"Cat A";
        cout<<endl;

    }
}
