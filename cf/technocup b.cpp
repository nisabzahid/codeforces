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
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int c=0;
    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n; j++)
        {
            if(a[i][j]==0)
            {    // cout<<i+1<<j+1<<"      "<<endl;
                for(int p=j+1; p<n; p++)
                {
                    if(a[i][p]==1)
                    {
                        c++; //cout<<" right i "<<p+1<<" p "<<j+1<<endl;

                    break;}
                }
                for(int p=j-1; p>=0; p--)
                {
                    if(a[i][p]==1)
                    {
                        c++; //cout<<" left i "<<p+1<<" p "<<j+1<<endl;

                    break;}
                }
                for(int p=i+1; p<m; p++)
                {
                    if(a[p][j]==1)
                    {
                        c++; //cout<<" up p "<<p+1<<" j "<<j+1<<endl;

                    break;}
                }
                for(int p=i-1; p>=0; p--)
                {
                    if(a[p][j]==1)
                    {
                        c++;

                        //cout<<"    down p "<<p+1<<" j "<<j+1<<endl;
                    break;}
                }

            }
        }
    }
    cout<<c<<endl;
    return 0;
}
