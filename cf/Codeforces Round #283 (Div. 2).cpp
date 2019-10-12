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

    int a;
    cin>>a;
    int s[a];
    for(int i=0; i<a; i++)
    {
        cin>>s[i];
    }
    vector<int>v;
    int q=-1,mn=20000;
    for(int i=0; i<a-2; i++)
    {
        if( abs(s[i]-s[i+2])<mn)
        {
            mn=abs(s[i]-s[i+2]);
            q=i+1;
        }
    }

    return 0;
}
