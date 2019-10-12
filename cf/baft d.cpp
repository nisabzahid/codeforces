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
        int s;
        cin>>s;
        int a[s];
        for(int d=0; d<s; d++)
        {
            cin>>a[d];
        }
        long long num=10000007,r=0;

        for(int j=0; j<s; j++)
        {
            int sum=1;
            int p=sqrt(a[j])+1;
            for(int m=2; m<p; m++)
            {
                if(a[j]%m==0)
                {   if(a[j]/m!=m)
                    sum+=m+(a[j]/m);
                    else sum+=m;
                    // cout<<sum<<" sum"<<endl;
                }
            }
            if(sum>a[j])
            {
                if(sum<num)
                {
                    num=sum;
                    r=a[j];
                }
            }

        }
        if(r==0)
        {
            cout<<-1<<endl;
        }
        else
            cout<<r<<" "<<num-r<<endl;









    }
    int ans;




    return 0;
}
