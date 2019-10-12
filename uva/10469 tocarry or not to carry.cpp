
#include<bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long a,b;
    while(scanf("%llu%llu",&a,&b)!=EOF)
    {
        int r[10000]= {0};
        int i=0;

        while(a>0||b>0)
        {
            if((a%2)+(b%2)==1)
            {
                r[i]=1;

            }
            else r[i]=0;
            i++;
            a/=2;
            b/=2;
        }
        int c=0;

        for(long long k=i; k>-1; k--)
        {
            if(r[k]==1)
                c+=pow(2,k);
        }
        cout<<c<<endl;

    }
    return 0;
}


