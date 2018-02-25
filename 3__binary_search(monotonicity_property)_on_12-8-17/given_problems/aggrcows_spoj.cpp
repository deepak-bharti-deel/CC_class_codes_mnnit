#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli ans_plz(lli max);
bool is_okay(lli mid);
lli t,n,c;
lli position[1000001];
int main()
{
	int i;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&c);
		lli max=-1;
		for(i=0; i<n; ++i){
			scanf("%lld",&position[i]);
			if(position[i]>max)
				max=position[i];
		}
		sort(position,position+n);
		printf("%lld\n",ans_plz(max));
	}

	return 0;
}


lli ans_plz(lli max)
{
	lli low,high,mid,ans=0; 
	low=0; high=max;
	while(low<=high){
		mid=low+(high-low)/2;
		if(is_okay(mid)){
			// printf("okay for %lld\n",mid);
			ans=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return ans;
}

bool is_okay(lli mid)
{	
	// printf("for %lld\n",mid);
	int i,prev_position=position[0];
	lli cows=c-1;
	for(i=1; i<n; ++i){
		// printf("nc: %lld diff:%lld\n",cows,position[i]-prev_position);
		if(position[i]-prev_position>=mid){
			// printf("putting cows\n");
			--cows; 
			if(cows==0) return true;
			prev_position=position[i];
		}
	}
	return false;
}
