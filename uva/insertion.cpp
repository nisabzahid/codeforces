#include<iostream>
using namespace std;
int insort(int a[],int n)
{

    for(int p=1; p<n; p++)
    {
        int key=a[p];
        int j=p;
        for (; key<a[j-1]; j--)
        {
            a[j]=a[j-1];
        }
        a[j]=key;
    }
//    for (int i=0; i<n; i++)
//    {
//        cout<<a[i]<<" ";
//    }
//
//

return 0;

}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    insort(a,n);



    return 0;
}
