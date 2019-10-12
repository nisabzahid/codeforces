
#include<bits/stdc++.h>


using namespace std;
long long fact(long long a)
{
    if (a==1)return 1;
    else return a*fact(a-1);


}


int main()
{
    long long a,b,c;
    cin>>a>>b;
    long long d=min(a,b);
    cout<<fact(d)<<endl;



    return 0;
}
