
#include<bits/stdc++.h>
using namespace std;
int main()
{


    int a;
    cin>>a;
    char s[a+1],p[a+1];
    for(int i=1; i<=a; i++)
    {
        cin>>s[i];
    }
    int k=a;
    for(int j=1; j<=k; j++)
    {






        if(a%2==1)
        {
            p[j]=s[((a+1)/2)];
            cout<<s[((a+1)/2)];

        }
        else
        {
            p[j]=s[(a/2)];
            cout<<s[(a/2)];
        }




        a--;

    }


    cout<<endl;

    return 0;
}
