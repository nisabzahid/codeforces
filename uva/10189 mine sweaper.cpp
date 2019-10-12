#include<bits/stdc++.h>

using namespace std;
int main()
{
int c=0;
    long long n,m,f=0;
    while(cin>>n>>m)
    {
        c++;
        if(n==0&&m==0)break;

        char a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int s[105][105]= {{0},{0}};
         for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                //if(i>=0&&i<n&&j>=0&&j<m)
                { if(j>0&&i>0)
                    if(a[i-1][j-1]=='*'&&a[i][j]!='*')  s[i][j]++;
                    if(i>0)
                    if(a[i-1][j]=='*'&&a[i][j]!='*')    s[i][j]++;
                    if(i>0&&j<m-1)
                    if(a[i-1][j+1]=='*'&&a[i][j]!='*')  s[i][j]++;
                    if(j>0)
                    if(a[i][j-1]=='*'&&a[i][j]!='*')    s[i][j]++;
                    if(j<m-1)
                    if(a[i][j+1]=='*'&&a[i][j]!='*')    s[i][j]++;
                    if(i<n-1&&j>0)
                    if(a[i+1][j-1]=='*'&&a[i][j]!='*')  s[i][j]++;
                    if(i<n-1)
                    if(a[i+1][j]=='*'&&a[i][j]!='*')    s[i][j]++;
                    if(i<n-1&&j<m-1)
                    if(a[i+1][j+1]=='*'&&a[i][j]!='*')  s[i][j]++;


                }

            }
        }
        if(f==1)printf("\n");f=1;
        cout<<"Field #"<<c<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='*')printf("*");
                else printf("%d",s[i][j]);


            }
        printf("\n");
        }
        //printf("\n");



    }



    return 0;
}
