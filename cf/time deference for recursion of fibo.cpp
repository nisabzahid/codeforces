#include<iostream>
using namespace std;
   // int dp[100];
int f(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;

    else
    {
          return f(n-2)+f(n-1);
    }

}






int main()
{



int a;

   while(1){
    cin>>a;
   cout<<"for "<<a <<" f() "<<f(a)<<endl;
   }



}
