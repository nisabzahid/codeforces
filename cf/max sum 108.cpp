#include<iostream>
using namespace std;

int main()
{
    long long t;
    while(cin>>t)
    {
        int a[120][120],sum[120][120];;
        for(int i=1; i<=t; i++)
        {
            for(int j=1; j<=t; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1; i<=t; i++)

            for(int j=1; j<=t; j++)

                for(int c=1; c<=i; c++)

                    for(int d=1; d<=j; d++)

                        sum[i][j]+=a[c][d];

        int mx=0;
        for(int i=0; i<=t; i++)
            for(int j=0; j<=t; j++)
                for(int c=0; c<=i; c++)
                    for(int d=0; d<=j; d++)
                    {
                        int temp=sum[i][j]-sum[i][d]-sum[c][j]+sum[c][d];
                           if(temp>mx)
                             mx=temp;
                             //cout<<temp<<endl;
                    }

        cout<<mx<<endl;





    }






    return 0;
}


