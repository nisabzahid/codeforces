#include<cstdio>
#include<vector>
using namespace std;
#define MAX 100000
vector<int>edge[MAX];
vector<int>cost[MAX];
int main()
{

    int N,E,i;
    scanf("%d%d",&N,&E);
    for(i=1; i<=E; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        edge[x].push_back(y);
        edge[y].push_back(x);
    }


for(int j=0;j<N;j++){
        int s=edge[j].size();
        printf("NODE %d\n",j);
    for(int k=0;k<s;k++){
        printf("%d ",edge[j][k]);
    }
    printf("\n");
}


}
