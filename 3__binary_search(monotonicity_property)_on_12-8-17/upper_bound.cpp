#include<bits/stdc++.h>
using namespace std;
#define lln long long int

lln n,k,arr[1000001];

int main()
{
	int i,low,high,mid,ans=-1;
	scanf("%lld %lld",&n,&k);

	for(i=0; i<n; ++i){
		scanf("%lld",&arr[i]);
	}

	sort(arr,arr+n);
	low=0; high=n-1;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]>k){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}

	if(ans==-1){
		printf("no upper bound\n");
	}else{
		printf("%lld\n",arr[ans]);
	}

	return 0;
}