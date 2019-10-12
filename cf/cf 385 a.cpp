#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c;

cin>>a>>b>>c;
int w=0,x=0,y=0;
int j=1;
int d=min(a/1,min(b/2,c/4));
cout<<(4*d)+d+(2*d)<<endl;

return 0;
}
