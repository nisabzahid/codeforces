#include<iostream>
using namespace std;



int main()
{
    int n,k;
    cin>>n>>k;
    int s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int c=0;
    for(int i=0; i<n; i++)
    {

        if(s[i]<=8)
        {
            k-=s[i];
            c++;
        }
        else  if(s[i]>8)
        {
            k-=8;
            s[i+1]+=s[i]-8;
            c++;
        }if(k<=0)
        {
            cout<<c<<endl;
            return 0;
        }
       // cout<<k<<"k"<<endl;
    }
    cout<<-1<<endl;

    return 0;
}
