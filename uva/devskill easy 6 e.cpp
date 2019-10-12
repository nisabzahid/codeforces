
#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a;
    for(int i=0; i<t; i++)
    {

        cin>>a;
        int l=a.length();
        int g=0;
        int s[26]={0};
        for(int j=0; j<l; j++)
        {
            s[a[j]-'a']+=1;
        }
        int f=0;
        for(int k=0; k<26; k++)
        {
            if(s[k]==2)
            {
                f++;
            }
        }
        if(l==1){cout<<"Case "<<i+1<<": "<<l-f*2-1<<endl;}
        else
        cout<<"Case "<<i+1<<": "<<l-f*2-1<<endl;


    }
}
