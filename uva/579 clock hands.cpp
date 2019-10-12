

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a,b;
    char c;
    while(cin>>a>>c>>b)
    {
        if(a==0&&b==0)
        {
            return 0;
        }

        double x,y=10000;
        x=360-(30*a);
        y=360-(b*60);
        cout<<min(x,y)<<endl;

    }

}

