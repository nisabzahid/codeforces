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
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int f,k,j;
        int a[100][7]= {{0},{0}};
        cin>>f;
        for(j=0; j<f; j++)
        {
            cin>>a[j][0];
            for(k=0; k<a[j][0]; k++)
            {
                int c;
                cin>>c;
                a[j][c]=1;
            }
        }
        for(int h=0; h<2; h++)
        {
            for(int w=1; w<7; w++)
            {
                cout<<" ( " <<h<<" "<<w<<" "<< a[h][w]<<" )";
            }
            cout<<endl;
        }

    }
    return 0;
}
