#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)

int main()
{
	int n,i,j,arr[100001];
	scanf("%d",&n);
	fl(n){
		scanf("%d",&arr[i]);
	}

	fl(i,n){ arr[i]=1; }

	fl(i,n){
		fl(j,i){
			if(arr[j]<arr[i]){
				arr[i]=max(arr[i],arr[j]);
			}
		}
		arr[i]+=1;
	}
	int ans=arr[0];
	fl(i,n){
		if(arr[i]>ans)
			ans=arr[i];
	}

	printf("ans is %d\n",ans);

	return 0;
}