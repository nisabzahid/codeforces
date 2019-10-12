
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
    int a;
    cin>>a;
    char p[a][a];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            cin>>p[i][j];
        }
    }
    int s[100][100]= {{0},{0}};
    bool t=true;
    int d=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {

            {
                if(j+1!=a&&p[i][j+1]=='o')d++;
                if(j!=0&&p[i][j-1]=='o')d++;
                if(i!=a-1&&p[i+1][j]=='o')d++;
                if(i>0&&p[i-1][j]=='o')d++;
               // cout<<d<<i<<j<<endl;
            }
            if(d%2==1&&d!=0)
            {
                cout<<"NO"<<endl;
                t=false;
                return 0;
            }
            else d=0;

        }
    }
    if(t==true)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
