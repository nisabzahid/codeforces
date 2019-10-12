#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    pair<int ,int>a[t];
    bool c=false,d=false;
    for(int i=0; i<t; i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    for(int j=0; j<t; j++)
    {
        if(a[0].first!=a[j].first)
        {
            c=true;
            break;
        }
    }
    for(int j=0; j<t; j++)
    {
        if(a[0].second!=a[j].second)
        {
            d=true;
            break;
        }

    }
    if(c==false||d==false)
    {
        printf("YES\n");
    }
    else printf("NO\n");


}

