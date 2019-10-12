#include<iostream>

using namespace std;



int main()
{

    char c[100][100];
    int a,b;
    bool p=true;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='C'||c[i][j]=='Y'||c[i][j]=='M')
            {
                p =false;
                cout<<c[i][j]<<endl;
            }
        }
    }
    if(p==true){
        cout<<"#Black&White"<<endl;
    }
    else cout<<"#Color"<<endl;

    return 0;
}
