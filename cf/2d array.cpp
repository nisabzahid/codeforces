#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],b[6][6]= {{0},{0} },mx=-70;
    for(int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            if(i!=0&&i!=5&&j!=0&&j!=5)
            {
                int p=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
                if(p>mx)mx=p;
            }
        }
    }
    printf("%d\n",mx);



}
