#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    pair<float,string>a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+t);
    int k=1;
    for(int j=t-1; j>=0; j--,k++)
    {
        cout<<k<<"."<<a[j].second<<endl;
    }


    return 0;

}
