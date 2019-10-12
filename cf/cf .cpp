
#include<bits/stdc++.h>
using namespace std;
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=1; i<100000; i++)
    {
        int j;
        j=i*a;
        //cout<<j<<" "<<endl;
        if(j%10==0||j%10==b)
        {
            cout<<i<<endl;

            break;
        }
    }
    return 0;
}
