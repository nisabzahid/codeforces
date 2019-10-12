#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int ans=0;
        if(t%4==0)ans=6;
        else if(t%4==1)ans=2;
        else if(t%4==2)ans=4;
        else ans=8;
        printf("%d\n",ans);
    }



    return 0;
}
