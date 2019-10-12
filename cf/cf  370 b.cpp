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
inline bool sc(int &_x)
{
    return scanf("%d",&_x)==1;
}
inline bool sc(int &_x, int &_y)
{
    return sc(_x)&&sc(_y);
}
inline bool sc(int &_x, int &_y, int &_z)
{
    return sc(_x)&&sc(_y)&&sc(_z);
}
inline bool sc(int &_x, int &_y, int &_z, int &_zz)
{
    return sc(_x)&&sc(_y)&&sc(_z)&&sc(_zz);
}
/*      direction
int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};
int kx[]={2,2,-2,-2,1,-1,1,-1};
int ky[]={1,-1,1,-1,2,2,-2,-2};*/
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string a;
        cin>>a;
        int m=a.length();

        if(m%2==1||a.length()==1)
        {
            if(a[(m/2)+1]=='.')
            {
                a[(m/2)+1]='a';
            }
        }
        for(int k=0; k<m/2; k++,m--)
        {

            cout<<k<<m<<" ";
            if(a[k]=='.')
            {
                a[k]=a[m];
            }
            if(a[m]=='.')
            {
                a[m]=a[k];
            }
            if(a[m]=='.'&&a[k]=='.')
            {
                a[m]='a';
                a[k]='a';
            }
        }
        bool t=true;
        for(int k=0, m=a.length()-1; k!=m; k++, m--)
        {
            if(a[k]!=a[m])
            {
                t=false;
                cout<<-1<<endl;
                break;
            }
        }
        if(t==true)
        {
            cout<<a<<endl;
        }

    }
    return 0;
}
