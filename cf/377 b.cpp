
#include<bits/stdc++.h>
using namespace std;
int b[5000]={0};
int main()
{
    int t,k;
    cin>>t>>k;
    int a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    if (t==1){
        cout<<k-a[0]<<endl;
        cout<<k-a[0]<<end;
        return 0;
    }
    int  s=0;
    for(int j=1; j<t; j++)
    {

        if((a[j]+a[j-1])<k)
        {
          //  cout<<a[j]+a[j-1]<<" "<<endl;
            int l=k-(a[j]+a[j-1]);
            a[j]+=l;
           //cout<<m<<'M'<<endl;
            //b[j]=m;

            s+=l;

        }
    }
    cout<<s<<endl;
    for(int f=0; f<t; f++)
    {
        if(f==t-1)
        {
            if(b[f]==0)
                cout<<a[f]<<endl;
            else cout<<b[f]<<endl;
        }
        else
        {
            if(b[f]==0)
                cout<<a[f]<<" ";
            else cout<<b[f]<<" ";
        }
    }
    return 0;
}
