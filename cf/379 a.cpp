#include<bits/stdc++.h>

using namespace std;
int main()
{

    int s,d=0,e=0;
    cin>>s;
    char a;
    for(int i=0; i<s; i++)
{
    cin>>a;
    if(a=='A')
        {
            e++;
        }
        else d++;
    }
    if(d>e)
{
    cout<<"Danik"<<endl;
}
else if(d<e)
{
    cout<<"Anton"<<endl;
}
else cout<<"Friendship"<<endl;


return 0;
}
