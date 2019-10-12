#include<bits/stdc++.h>

using namespace std;

bool st(string s)
{
    stack<char>a;
    int l=s.size();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='('   ||  s[i]=='[')
        {
            a.push(s[i]);
        }
        else if(s[i]==')'||s[i]==']')
        {
            if(a.empty())return false;
            char t=a.top();
            if(s[i]==')'&&t!='(')return false;
            else  if(s[i]==']'&&t!='[')return false;
            a.pop();
        }
    }
    return a.empty();
}




int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {

        string s;
        cin>>s;

        if(st(s))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;





    }




    return 0;
}



//3
//([])
//(([()])))
//([()[]()])()
