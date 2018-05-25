#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)

int knapsack(int index,int remain_weight);
int n,value[1000001],weight[1000001],max_value[1001][1001];
int max_weight,ans,i,j;

int main()
{
	scanf("%d",&n);
	fl(i,n){
		scanf("%d",&value[i]);
		scanf("%d",&weight[i]);
	}
	// fl(i,n){
	// 	fl(j,max_weight)
	// 		max_value[i][j]=-1;
	// }
	memset(max_value,0,sizeof(max_value));

	scanf("%d",&max_weight);

	knapsack(0,max_weight);

	// ans=max_value[n-1][0];
	ans=knapsack(0,max_weight);
	printf("ans %d\n",ans);

	return 0;
}


int knapsack(int index, int remain_weight)
{
	if(index==n || remain_weight==0)
		return 0;
	if(max_value[index][remain_weight]) return max_value[index][remain_weight]; 
	else if(weight[index]<=remain_weight){
		//return max value on item at current index taken or not taken
		return max_value[index][remain_weight]=max(value[index]+knapsack(index+1,remain_weight-weight[index]), knapsack(index+1,remain_weight));
	}else{
		return max_value[index][remain_weight]=knapsack(index+1,remain_weight);
	}
}



