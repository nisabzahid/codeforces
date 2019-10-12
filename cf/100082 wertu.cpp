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
    char c;
    while ( scanf("%c",&c)==1)
    {
        if (c=='1')
            printf("`");
        if (c=='2')
            printf("1");
        if (c=='3')
            printf("2");
        if (c=='4')
            printf("3");
        if (c=='5')
            printf("4");
        if (c=='6')
            printf("5");
        if (c=='7')
            printf("6");
        if (c=='8')
            printf("7");
        if (c=='9')
            printf("8");
        if (c=='0')
            printf("9");
        if (c=='-')
            printf("0");
        if (c=='=')
            printf("-");
        if (c=='W')
            printf("Q");
        if (c=='E')
            printf("W");
        if (c=='R')
            printf("E");
        if (c=='T')
            printf("R");
        if (c=='Y')
            printf("T");
        if (c=='U')
            printf("Y");
        if (c=='I')
            printf("U");
        if (c=='O')
            printf("I");
        if (c=='P')
            printf("O");
        if (c=='[')
            printf("P");
        if (c==']')
            printf("[");
        if (c=='\\')
            printf("]");
        if (c=='S')
            printf("A");
        if (c=='D')
            printf("S");
        if (c=='F')
            printf("D");
        if (c=='G')
            printf("F");
        if (c=='H')
            printf("G");
        if (c=='J')
            printf("H");
        if (c=='K')
            printf("J");
        if (c=='L')
            printf("K");
        if (c==';')
            printf("L");
        if (c=='\'')
            printf(";");
        if (c=='X')
            printf("Z");
        if (c=='C')
            printf("X");
        if (c=='V')
            printf("C");
        if (c=='B')
            printf("V");
        if (c=='N')
            printf("B");
        if (c=='M')
            printf("N");
        if (c==',')
            printf("M");
        if (c=='.')
            printf(",");
        if (c=='/')
            printf(".");
        if (c==' ')
            printf(" ");
        if (c=='\n')
            printf("\n");
    }
    return 0;
}
