
#include <bits/stdc++.h>

using namespace std;
char  p[266];


void init(int b)
{

    for (int i=0; i<=b; i++)
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
int num(int b)
{
    set<int> s;
    for (int i=0; i<=b; i++)
    {
        s.insert(find(p[i]));
       // cout<<find(p[i])<<endl;
    }
    return s.size();
}

void join(int a,int b)
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
        init(c-65);




        while(1)
        {string a;
        getline(cin,a);
        cout<<a<<endl;

       // if(a[0]=='0') break;
           int x=a[0]-65,y=a[1]-65;
             cout<<c-65<<a[0]-65<<a[1]-65<<endl;
              join(x,y);

        }
       cout<<num(c-65);


    }


}
