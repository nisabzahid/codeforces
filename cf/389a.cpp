#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long a=4,b=3,c=9;
   while( cin>>a>>b>>c){
    b=b*2;
    long long  x,y;

    x=ceil((double)c/(double)b);
    long k=c;
    if(k%2==1)k++;
    y=(k)%b;
    if (y==0)
    {
        y=b;
    }
    int d=(y/2)+y%2;
    char p;
    if(c%2==0)
    {
        p='R';
    }
    else p='L';
    cout<<x<<" "<<d<<" "<<p<<endl;
}
//ishmam int main()
//{
//    int n, m, k;
//    cin >> n >> m >> k;
//    int lane = k / (2*m);
//    if (k % (2*m)) lane++;
//    cout << lane;
//    int desk = k - ((lane-1)*2*m);
//    int ans = desk/2;
//    if (desk%2) ans++;
//    cout << ' ' << ans << ' ';
//    if (k%2) puts("L");
//    else puts("R");
//    return 0;
//}

    return 0;
}
