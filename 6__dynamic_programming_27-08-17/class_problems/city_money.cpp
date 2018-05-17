#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)

int i,n,money[10001];
int maxat[100001];

int ans();

int main()
{	
	scanf("%d",&n);
	fl(i,n){
		scanf("%d",&money[i]);
	}

	printf("ans is : %d\n",ans());

	return 0;
}

int ans()
{
	if(n==1) return money[0];
	if(n<3) return max(money[0],money[1]);
	maxat[0]=money[0]; maxat[1]=max(money[0],money[1]);
	for(i=2; i<n; ++i){
		maxat[i]=max(maxat[i-2]+money[i], maxat[i-1]);
	}
	return maxat[n-1];
}