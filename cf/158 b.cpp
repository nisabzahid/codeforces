#include<iostream>
using namespace std;



int main()
{
    int a,w=0,x=0,y=0,z=0,ans=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            w++;
        }
        else if(c==2)
        {
            x++;
        }
        else if(c==3)
        {
            y++;
        }
        else z++;
    }
    ans+=z;
    ans+=x/2;
    if(x%2==1)
    {
        ans++;
        w-=2;
        //cout<<ans<<endl;
    }
    ans+=min(w,y);
    //cout<<ans<<endl;
    int j=min(w,y);
    w-=j;

    y-=j;
//cout<<w<<" "<<y<<endl;
    ans+=w+(y/4);
    if(y%4>0)ans++;


    cout<<ans<<endl;


    return 0;
}
