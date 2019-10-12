#include <iostream>

using namespace std;

int main()
{
    string a="Bulbasaur",b;
    cin>>b;
    int ans=0;
    int l=b.length(),c=a.length();
    int s[256]= {0};
    for (int i=0; i<l; i++)
    {
        s[b[i]]++;
    }
    s['a']=s['a']/2;
    s['u']= s['u']/2;
    ans=min(s['b'],s['B']);
    ans=min(ans,s['u']); ans=min(ans,s['a']);
     ans=min(ans,s['l']);
      ans=min(ans,s['s']);
       ans=min(ans,s['r']);

   // ans=(min(min(min(min(,s['u']),s['a']),s['l']),s['s']),s['r']);

   // cout<<s['b']<<s['B']<<s['u']<<s['a']<<s['s']<<s['r']<<s['l']<<endl;
            cout<<ans<<endl;


            return 0;
}
