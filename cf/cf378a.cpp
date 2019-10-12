
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

    int a,b,w=0,x=0,y=0;
    cin>>a>>b;

        for(int i=1; i<7; i++)
        {
            if(abs(i-a)==abs(i-b))
            {
                x++;
            }
            else if(abs(i-a)>abs(i-b))
            {
                y++;
            }
            else w++;
        }

 cout<<w<<" "<<x<<" "<<y<<endl;
    return 0;
}
