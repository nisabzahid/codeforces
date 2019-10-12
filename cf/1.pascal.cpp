#include<bits/stdc++.h>
using namespace std;

int pascal(int r,int c)
{
    if(c==0 || r==c)
        return 1;
    return pascal(r-1,c-1)+pascal(r-1,c);
}
int main()
{
    int r,c;
    cin>>r>>c;
    cout<<pascal(r,c);
}
