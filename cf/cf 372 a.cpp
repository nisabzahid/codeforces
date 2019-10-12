
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cin>>a;
    int s[a],mx=-1,ans=0;;
    for(int i=0; i<a; i++)
    {
        cin>>s[i];
        if(mx<s[i])
        {
            mx=s[i];
        }



    }
    for(int j=0; j<a; j++)
        {
            ans=ans+mx-s[j];
        }
      cout<<ans<<endl;

    return 0;
}
