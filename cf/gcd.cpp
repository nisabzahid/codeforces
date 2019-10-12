#include <iostream>

using namespace std;
int a[100];
int g=0;
int ins( int n)
{
    for (int j=1; j<n; j++)
    {
        int k=a[j];
        int i=j-1;
        while(i>=0&&a[i]>k)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=k;
    }


}
int gcd(int a, int b){
if(a==0)return a;
if(b==0)return b;
while(b!=0){
    int t=b;
    b=a%b;
    a=t;
}



return a;
}


int main()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;

    }


    return 0;
}
