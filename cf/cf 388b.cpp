

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
#define len 100000
int main(){
    int x,y,a,b,g,h;
    cin>>x>>y>>a>>b>>g>>h;
    int x1,y1,a1,b1,g1,h1;
    x1=g+abs(x-a);
    y1=h+abs(y-b);
    a1=a+abs(x-g);
    b1=b+abs(y-h);
    g1=x+abs(a-g);
    h1=y+abs(b-h);
    cout<<3<<endl;
    cout<<x1<<" "<<y1<<endl;cout<<a1<<" "<<b1<<endl;cout<<g1<<" "<<h1<<endl;

    return 0;
}
