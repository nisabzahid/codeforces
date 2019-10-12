#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10];
    cin>>a;
    if(a[strlen(a)-2]=='P')
    {
        int b=((a[0]-'0')*10)+(a[1]-'0');
        printf("%d",b+12);
        for(int i=2; i<strlen(a)-3; i++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    else for(int i=0; i<strlen(a)-2; i++)
        {
            printf("%c",a[i]);
        }



}
