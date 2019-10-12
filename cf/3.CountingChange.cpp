#include<bits/stdc++.h>
using namespace std;

int coin[20];
int make,n;
int dp[20][100];
int countChange(int i,int amount)
{
    if(i>=n) { ///All coins have been taken
        if(amount==make)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1)
        return dp[i][amount]; ///no need to calculate same state twice
    int ret1=0,ret2=0;
    if(amount+coin[i]<=make)
        ret1=countChange(i,amount+coin[i]); ///try to take coin i
    ret2=countChange(i+1,amount); ///dont take coin i
    return dp[i][amount]=ret1+ret2; ///storing and returning.

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>coin[i];
    cin>>make;
    memset(dp,-1,sizeof(dp)); ///initialing with -1
    cout<<countChange(0,0);
}

/**
2
1 2
4
**/
