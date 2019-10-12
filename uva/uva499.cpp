#include<bits/stdc++.h>
using namespace std;


int main()
{

    freopen("C:\Users\nisabbinzabid\Desktop\p\in.txt","r",stdin);
    freopen("C:\Users\nisabbinzabid\Desktop\p\out.txt","w",stdout);

    char   a[100];
    // string a;


    while(gets(a))
    {
        int x[257]= {0};
        char ch[256];
        int m=0,s=strlen(a);
        for(int i=0; i<s; i++)
        {
            x[a[i]]++;
            m=max(m,x[a[i]]);
        }

        for(int i=65; i<=122; i++)
        {
            if((i>=65&&i<=90)||(i>=97&&i<=122))

            {if(m==x[i])
                printf("%c",i);
            }

        }
        printf(" %d\n",m);

    }

    return 0;
}
