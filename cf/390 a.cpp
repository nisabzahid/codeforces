
#include<iostream>
using namespace std;



int main()
{
    int a;
    while   (cin>>a)
    {
        int s[a];
        for(int i=0; i<a; i++)
        {
            if(i==0)cin>>s[i];
            else
            {
                int k;
                cin>>k;
                s[i]=s[i-1]+k;
              //  cout<<s[i]<<endl;
            }
        }

        for(int j=0; j<a; j++)
        {
            if(s[j]!=0&&s[a-1]-s[j]!=0)
            {
              //  cout<<s[j]<<" "<<s[a-1]-s[j]<<endl;
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<1<<" "<<j+1<<endl;
                cout<<j+2<<" "<<a<<endl;
                return 0;
            }
        }
        if(s[a-1]!=0){
            cout<<"YES"<<endl;
                cout<<1<<endl;

                cout<<1<<" "<<a<<endl;
                return 0;
        }

        cout<<"NO"<<endl;
    }
    return 0;
}
