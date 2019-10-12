#include <bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        for(int j=0;j<t;j++){
            if(t-i>j){
                printf(" ");
            }
            else printf("#");
        }
        printf("\n");
    }

    }
