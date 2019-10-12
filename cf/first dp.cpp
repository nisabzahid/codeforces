#include<iostream>
using namespace std;
    long long dp[100];
long long f(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    else
    {
        dp[n]=f(n-2)+f(n-1);
        return dp[n];
    }
}






int main()
{


    for(int i=0; i<100; i++)
    {
        dp[i]=-1;
    }
int a;

   while(1){
    cin>>a;
   cout<<"for "<<a <<" f() "<<f(a)<<endl;
   }



}
