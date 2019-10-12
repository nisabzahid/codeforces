#include<bits/stdc++.h>

using namespace std;


int main()
{
    string a;
    while(getline(cin,a))
    {
        int l=a.length(),i;
        cout<<a<<endl;
       // cout<<l<<endl;
        int k=-1;
        for( i=0; i<l; i++)
        {
            if(a[i]==' ')
            {
                for(int j=i-1; j>k; j--)
                {
                    cout<<a[j];

                }
                k=i;
                cout<<" ";
            }
        }
        for(int j=i-1; j>k; j--)
        {
            cout<<a[j];

        }

        cout<<endl;

    }
}
