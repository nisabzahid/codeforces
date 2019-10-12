#include<iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    int s;
    string a;
    for(int i=0; i<t; i++)
    {
        cin>>s;
        cin>>a;
        int m=0,l=0,k=0,n=0,f=0,len=0,ans=10000000;
        for(int j=0; j<s; j++)
        {
            len++;
            if(a[j]=='M'&&l==0)
            {
                m++;
                l=1;
            }
            else if(a[j]=='T'&&k==0)
            {
                m++;
                k=1;
            }
            else if(a[j]=='J'&&n==0)
            {
                m++;
                n=1;
            }
            else  if(a[j]=='F'&&f==0)
            {
                m++;
                f=1;
            }
            if(m==4)
            {

                if(len<ans)
                {
                    ans=len;

                }
                len=0;
                m=0;
                f=0;
                n=0;
                k=0;
                l=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
