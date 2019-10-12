#include<iostream>
using namespace std;



int main()
{


    int n,k;
    cin>>n>>k;
    int f[250]= {0};
    char c;
    bool x=false;
    for(int i=0; i<n; i++)
    {
        cin>>c;
        f[c]++;
        if(f[c]>k)x=true;
    }
    if(x)cout<<"NO";
    else cout<<"YES";
    cout<<endl;




    return 0;
}
