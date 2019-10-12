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
        int f,k=0,j;
        int a[105][7]= {{0},{0}};
        cin>>f;
        for(j=0; j<f; j++)
        {
            cin>>a[j][0];
            for(k=0; k<a[j][0]; k++)
            {
                int c;
                cin>>c;
                a[j][c]+=1;
            }
        }
        int l[f];
        for(int h=0; h<f; h++)
        {
            l[h]=a[h][0];
        }
        for(j=0; j<f; j++)
        {
            bool r=true;
            while(r==true)
            {

                int c=0;
                for(k=1; k<7; k++)
                {
                    if(a[j][k]>0)
                    {
                        a[j][k]-=1;
                        c++;
                    }
                }
                if(c==4)
                    l[j]+=1;
                else if(c==5)
                {
                    l[j]+=2;
                }
                else if(c==6)
                {
                    l[j]+=4;
                }
                else if(c<4)
                {
                    r=false;
                }
                if(r==false )
                {
                    break;
                }
            }
        }
        int mx=0,g=0;
        for(int n=0; n<f; n++)
        {
            if(l[n]>mx)
            {
                mx=l[n];
                g=1;
            }
            else if(l[n]==mx)
            {
                g++;
            }
        }
        if(g>1)
        {
            cout<<"tie"<<endl;
        }
        else if(l[0]==mx)
        {
            cout<<"chef"<<endl;
        }
        else
        {
            for(int o=1; o<f; o++)
                if(l[o]==mx)
                {
                    cout<<o+1<<endl;
                    break;
                }
        }


//        for(int o=0; o<f; o++)
//        {
//            cout<<l[o]<<endl;
//
//        }

    }
    return 0;
}
