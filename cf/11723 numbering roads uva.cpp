#include<bits/stdc++.h>


using namespace std;

int main()
{
    long long t;

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long a,b;
        cin>>a>>b;
        long long  s[a];
        for(int j=0; j<a; j++)
        {
            cin>>s[j];
        }

        int l=0,m=0,k=100000000;
        for(int n=0; n<a; n++)
        {
            m=m+s[n];
            l++;
            if(m>=b)
            {
                if(k>l)
                {
                    k=l;
                    printf("Case %d: %d\n",i,k);

                }
                l=0;
                m=0;
            }
        }
        if(k>0)
            printf("Case %d: %d\n",i,k);
        else  printf("Case %d: -1\n",i);



    }

    return 0;

}
