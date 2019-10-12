#include <iostream>

using namespace std;
int a[100];
int g=0;
int ins( int n)
{
    for (int j=1; j<n; j++)
    {
        int k=a[j];
        int i=j-1;
        while(i>=0&&a[i]>k)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=k;
    }


}


int main()
{
    while(1)
    {
        int x;
        cin>>x;

        for(int i=0; i<x; i++)
        {
            cin>>a[i];
        }
        ins(x);
         for(int i=0; i<x; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
