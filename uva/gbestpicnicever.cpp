#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main (){
int t,tc=0;cin>>t;
while(t--){

    int k,m,n,p[105]={0},u,v;
    cin>>k>>n>>m;
    for(int i=0;i<k;i++){
        cin>>u;
        p[u]=1;
    }
    vector<int>vec[n];
    for(int i=0;i<m;i++){
        cin>>u>>v;
        vec[u].push_back(v);
    }

}





return 0;
}

