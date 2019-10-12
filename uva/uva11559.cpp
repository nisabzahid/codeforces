#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,bud,h,w;
    freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);

    while(scanf("%d%d%d%d",&n,&bud,&h,&w)==4)
    {
        int mc=bud+1;

        for(int i=0; i<h;i++)
        {
            int pp;
            cin>>pp;
            for(int j=0; j<w; j++)
            {
                int x;
                cin>>x;
                if(x>=n&&pp*n<=bud)
                {
                    if(mc>=pp*n)mc=pp*n;
                }
            }
        }
        if(mc<=bud)printf("%d\n",mc);
        else printf("stay home\n");

    }
    return 0;
}
