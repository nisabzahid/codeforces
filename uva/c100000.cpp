#include<bits/stdc++.h>
using namespace std;
#define X           first
#define Y           second
#define pb          push_back
#define pp          pop_back
#define mk          make_pair
#define EPS         1e-9
#define INF         1<<25
#define ln          '\n'
#define sp          ' '
#define all(x)      x.begin(),x.end()
#define Sort(x)     sort(all(x))
#define mem(a,b)    memset(a,b,sizeof(a))
#define lpa(p,v)    for(auto p:(v))
#define lp(a,b,c)   for(int a=(b);a<(c);a++)
#define lp0(a,n)    lp(a,0,n)
#define lpr(a,b,c)  for(int a=(b);a>=(c);a--)
#define faster      ios_base::sync_with_stdio(0);cin.tie(0);
#define debug(a)    cout<<a<<ln;
#define debug2(a,b)    cout<<a<<sp<<b<<ln;
#define debug3(a,b,c)    cout<<a<<sp<<b<<sp<<c<<ln;
const double PI=acos(-1.0);
const int N=200005;
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

    int x;
    cin>>x;
    int a[x];
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    int ans=1;
    for(int i=x-1; i>0; i--)
    {
        if(a[i]==0&&a[i-1]==1)
        {
            continue;
        }
        ans++;
    }
    cout<<ans<<endl;



    return 0;
}

