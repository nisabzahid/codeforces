#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

long long a;
cin>>a;
int ans=0;
if(a==0){
    ans=1;
}
else if(a%4==1){
    ans=8;
}else if(a%4==2){
    ans=4;
}
else if(a%4==3){
    ans=2;
}
else if(a%4==0){
    ans=6;
}




cout<<ans<<endl;
    return 0;
}
