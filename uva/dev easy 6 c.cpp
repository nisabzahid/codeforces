#include<bits/stdc++.h>
using namespace std;
int a[50];
long long f(int n)
{
    if(n==1)
        return 1;
    if(n==2)
    {
        return 3;
    }
    else  if(a[n]!=0)
    {
        return a[n];
    }
    else
    {     a[n]=f(n-1)+f(n-2);
        return a[n];
    }
}


int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }
    return 0;

}
