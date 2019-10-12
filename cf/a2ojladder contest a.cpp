#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <memory.h>
#include <ctime>

using namespace std;

#define ABS(a) ((a>0)?a:-(a))
#define MIN(a,b) ((a<b)?(a):(b))
#define MAX(a,b) ((a<b)?(b):(a))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define PI 3.14159265358979
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned
#define sf   scanf
#define pb    push_back
int main()
{

    int a;
    cin>>a;
    int ans=0,b=0,c=0,t=0;
    int v[a];
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v[i]=b;
        if(i==0){
            t=b;
            ans+=t+1;
        }
    }

    for(int j=1; j<a; j++)
    {
        if(t<=v[j])
        {
            ans+=2+v[j]-t;
            t=v[j];
        }
        else
        {
            ans+=t-v[j]+2;
            t=v[j];
        }

    }
    cout<<ans<<endl;
    return 0;
}
