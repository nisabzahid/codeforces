#include<bits/stdc++.h>
using namespace std;
string keyword[]={  "auto","break","case","char","const",
                    "continue","default","do","double","else",
                    "enum","extern","float","for","goto",
                    "if","int","long","register","return",
                    "short","signed","sizeof","static","struct",
                    "switch","typedef","union","unsigned","void",
                    "volatile","while"};
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    while(!in.eof())
    {
        getline(in,s);
        bool key=false;
        for(int i=0;i<32;i++)
            if(s==keyword[i])
            {
                key=true;
                break;
            }
        if(key)
            out<<"Valid\n";
        else
            out<<"Invalid\n";
    }
    in.close();
    out.close();

}
