#include<bits/stdc++.h>

using namespace std;
int memoi[201][25];

int main()
{
    long long t;
    cin>>t;
    int tc=0;
    while(tc<t)
    {
        long long m,c;
        cin>>m>>c;
        int a[20][20];
        for(int i=0; i<c; i++)
        {
            cin>>a[i][0];
            for(int j=1; j<=a[i][0]; j++)
            {
                cin>>a[i][j];
            }
        }
        memset(memoi,-1,sizeof(memoi));









tc++;
    }
    return 0;
}

