

#include<bits/stdc++.h>

using namespace std;


int main(){


    long long a,b,c;
   while(cin>>a){
        long long ans=(a*(a+1))/2;
   long long d,m;
   cin>>d;
   for(long long  i=0;i<d;i++){
    scanf("%lld",&m);
    ans-=m;
   }
    cout<<ans<<endl;

}    return 0;
}
