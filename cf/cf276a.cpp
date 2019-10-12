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
#define pf    printf
int main()
{

    int res=-2000000000;
    int a,b;
    sf("%d%d",&a,&b);
    for(int i=0; i<a; i++)
    {
        int c,d;
        sf("%d%d",&c,&d);
        int cur=c;
        if (d>b)
            cur-=(d-b);
        res=MAX(res,cur);
    }
    cout<<res<<endl;
    return 0;
}
