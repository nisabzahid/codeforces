#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long a,c=0;
    while( scanf("%lld",&a)==1)
    {c++;
    bool g=true;
        int s[a];
        for(int i=0; i<a; i++)
        {
            cin>>s[i];
        }
        for(int j=0; j<a; j++)
        {
            int sum =0;

            for(int k=0; k<j; k++)
            {
                sum+=s[k];
                if(s[j]==sum)
                {
                    g=false;
                    cout<<"Case # "<<c<<":";
                        for(int i=0; i<a; i++)cout<<" "<<s[i];
                    cout<<endl;
                    cout<<"This is not an A-sequence."<<endl;
                    break;
                }
                if(g==false)
                {
                    break;
                }
            }
        }

       if(g==true){ cout<<"Case # "<<c<<":";
                      for(int i=0; i<a; i++)

                          cout<<" "<<s[i];
                          cout<<endl;
                          cout<<"This is an A-sequence."<<endl;}



    }
    return 0;
}
