
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
char a[11][11];
int n,m,ans=0;
cin>>n>>m;
for(int i=0;i<n;i++) {cin>>a[i];}
for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
  if (a[i][j]=='W'&&((a[i-1][j]=='P')||a[i][j-1]=='P'||a[i+1][j]=='P'||a[i][j+1]=='P')) {ans++;cout<<i<<j<<endl;}
cout<< ans;
return 0;
}
