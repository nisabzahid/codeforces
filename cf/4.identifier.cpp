#include<bits/stdc++.h>
using namespace std;
bool check(string x)
{
    if(x[0]!='_' && isalpha(x[0])==0)
        return false;
    for(int i=1;i<x.length();i++)
    {
        if(!isalnum(x[i]) && x[i]!='_')
            return false;
    }
    return true;
}
int main()
{
    ifstream in("in_id.txt");
    ofstream out("out_id.txt");
    string x;
    while(!in.eof())
    {
        getline(in,x);
        if(in.eof())break;
        if(check(x))
            out<<"Valid\n";
        else
            out<<"Invalid\n";
    }
}
