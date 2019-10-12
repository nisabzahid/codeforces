#include<iostream>
using namespace std;
void bi(int j)
{
    int k=j;
    int a[100]= {0},n=0;
    while(j>0)
    {
        if(j%2==1)
        {
            a[n]=1;
        }
        else a[n]=0;
        j/=2;
        n++;
    }
    for(int i=n+5; i>=0; i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}

int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a+1; i++)
    {
        cout<<" "<<i<<"     "<<(i^(i+1))<<"    ";
        bi(i);

    }



    return 0;
}
