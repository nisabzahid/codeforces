#include<bits/stdc++.h>
using namespace std;
#define X           first
#define Y           second
#define N           100001
#define pb          push_back
#define pp          pop_back
#define mk          make_pair
#define PI          acos(-1)
#define EPS         1e-9
#define INF         1<<20
#define TC(t)       int t;cin>>t;while(t--)
#define line        '\n'
#define space       ' '
#define redian      180/PI
#define all(x)      x.begin(),x.end()
#define Sort(x)     sort(all(x))
#define mem(a,b)    memset(a,b,sizeof(a))
#define loopv(p,v)  for(auto p:(v))
#define loop(a,b,c) for(int a=(b);a<(c);a++)
#define loopr(a,b,c)for(int a=(b);a>=(c);a--)
#define faster      ios_base::sync_with_stdio(0);cin.tie(0);
const int MOD=1e9+7;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<int,string> psi;
typedef map<int,int>mii;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string a;
        cin>>a;
        int len=a.length();
        if(len%2==1)
        {
            if(a[(len/2)+1]=='.' )
            {
                a[(len/2)+1]='a';
            }
        }
        for(int j=0; j<len; j++)
        {
            if(a[j]=='.'&&a[len-j-1]=='.')
            {
                a[j]='a';
                a[len-j-1]='a';
            }
            else if(a[j]=='.')
            {
                a[j]=a[len-j-1];
            }
            else if(a[len-j-1]=='.')
            {
                a[len-j-1]=a[j];
            }
        }

        bool w=true;
        for(int j=0; j<len; j++)
        {
            if(a[j]!=a[len-j-1])
            {
                cout<<-1<<endl;
                w=false;
                break;
            }

        }
        if(w==true)
        {
            cout<<a<<endl;
        }



    }
    return 0;
}
