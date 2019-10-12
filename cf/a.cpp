#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {

        char a[203];
        long long b;
        scanf("%s",a);
        scanf("%lld",&b);
        int rem=0;
        for(int i=0; a[i]!='\0'; i++)
        {
            if(a[i]!='-')rem=((rem*10)+a[i]-'0')% b;
        }
       // if(a[0]=='-')rem=rem*(-1);
        if(rem==0)
        {

            printf("Case %d: divisible\n",j);
        }
        else
        {
            printf("Case %d: not divisible\n",j);


        }

    }
}
