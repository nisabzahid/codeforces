#include<stdio.h>
#include<iostream>
using namespace std;
int q[1000002]= {0};
int main()
{

    int a,b;
    cin>>a>>b;
    int s[a];
    for(int i=0; i<a; i++)
    {
        cin>>s[i];
    }
    for (int j=0; j<b; j++)
    {
        int k;
        cin>>k;
        q[k]+=1;
    }
    int c=0;
    for (int n=0; n<a; n++)
    { //cout<<q[s[n]]<<endl;
        if(q[s[n]]==0)
        {
            c++;
           // cout<<q[s[n]]<<s[n]<<n<<endl;
        }
    }

    cout<<c<<endl;


    return 0;
}



