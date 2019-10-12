

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
int main()
{
    int a;
    cin>>a;
    if(a%2==0)
    {
        int k=a/2;
        cout<<k<<endl;
        for(int i=1; i<=k; i++)
        {  if(i!=k)
            cout<<2<<" ";
          else  cout<<2;
        }
        cout<<endl;
        return 0;
    }
    cout<<(a/2)<<endl;
    cout<<3<<" ";
    for(int i=1;i<a/2;i++){
        if(i!=(a/2)-1)
            cout<<2<<" ";
         else   cout<<2;
    }
    cout<<endl;


    return 0;
}
