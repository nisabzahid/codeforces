
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a;
    cin>>a;



        int s[a];
        for(int i=0; i<a; i++)
        {
            cin>>s[i];
        }
        int x=0;
        for(int i=0; i<a; i++)
        {
            if(s[i]==0)
            {
                if(s[i-1]!=1)x++;
            }
            else x++;

        }
        cout<<x<<endl;
    return 0;
}
