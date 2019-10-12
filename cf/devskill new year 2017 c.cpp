

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if(a=="A"){
            cout<<"YES"<<endl;
         cout<<8<<endl;
         continue;
        }
        int p;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]=='A')
            {
                p=i;
//                cout<<i<<endl;
                break;
            }
        }

        bool g=true;
        long long q[10];
        for(int i=0; i<10; i++)
        {
            long long num=0;
            for(int j=0; j<a.length(); j++)
            {
                if(j==p)
                {
                    num=(num*10)+i;
                }
                else  num=(num*10)+a[j]-'0';







            }
            q[i]=num;
           // cout<<q[i]<<endl;

        }
        for(int k=0; k<10; k++)
        {
            if(q[k]%8==0)
            {

     g=false;
                cout<<"YES"<<endl<<k<<endl;
                break;

            }
        }

        if(g==true)
        {
            cout<<"NO"<<endl;
        }






    }
    return 0;
}
