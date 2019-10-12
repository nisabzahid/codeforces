#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int l=s.length();
    if(s[0]!='"' || s[l-1]!='"')
        return false;
    for(int i=1;i<l-1;i++)
    {
        if(s[i]=='"' && s[i-1]!='\\')
            return false;
    }
    return true;
}
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    while(!in.eof())
    {
        getline(in,s);
        if(check(s))
            out<<"Valid\n";
        else
            out<<"Invalid\n";
    }
    in.close();
    out.close();

}
