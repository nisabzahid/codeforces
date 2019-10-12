#include<bits/stdc++.h>
using namespace std;

bool isValid(string A)
{
    stack<char>s;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='(' ||A[i]=='{' ||A[i]=='[')
            s.push(A[i]);
        else if(A[i]==')' ||A[i]=='}' ||A[i]==']')
        {
            if(s.empty())
                return false;
            char t=s.top();
            s.pop();
            if(A[i]==')' && t!='(')
                return false;
            else if(A[i]=='}' && t!='{')
                return false;
            else if(A[i]==']' && t!='[')
                return false;
        }
    }
    return s.empty();
}
int main()
{
    string x="(){]";
    if(isValid(x))
        cout<<"balance\n";
    else
        cout<<"imbalance\n";
}
