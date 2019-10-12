#include <bits/stdc++.h>

using namespace std;
char  p[300];


void init(char b)
{
    char a='A';
    for (int i='A'; i<=b; i++)
    {
        p[i]=i;
        //cout<<p[i]<<" === ";
    }


}
int find(int a)
{
    if (p[a]==a) return a;
    return p[a]=find(p[a]);
}
int num(char b)
{
    set<char> s;

    char a='A';
    for (int i='A'; i<=b; i++)
    {
        s.insert(find(p[i]));
        cout<<find(p[i])<<endl;
    }
    return s.size();


}



void join(char a,char b)
{
    p[find(b)]=find(a);
}

int main ()
{
    int t;
    cin>>t;
    for(int test=0; test<t; test++)
    {
        char c;
        cout<<"\n\n";
        cin>>c;


        init(c);
        string a="0";

char w;
cin>>w;
        while(1)
        {
             getline(cin,a);
             //cout<<a<<endl;
             if(a.empty()) break;
            join(a[0],a[1]);
        }
        cout<<num(c);


    }


}
