#include <bits/stdc++.h>
using namespace std;
#define lln long long int

void count_ins(lln low,lln high);
void merge(lln low,lln high);
lln arr[200001],n,ins;
lln arr_l[200001],arr_r[200001];

int main()
{
	lln i,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(i=0; i<n; ++i){
			scanf("%lld",&arr[i]);
		}
		ins=0;
		count_ins(0,n-1);
		printf("%lld\n",ins);
	}


	return 0;
}

void count_ins(lln low,lln high)
{
	if(low==high){ return;}
	lln mid=low+(high-low)/2;
	count_ins(low,mid);
	count_ins(mid+1,high);
	merge(low,high);
}

void merge(lln low,lln high)
{
	// printf("inside merge\n");
	lln i,j,k,mid=low+(high-low)/2;

	for(i=low; i<=mid; ++i){
		arr_l[i]=arr[i];
	}
	for(i=mid+1; i<=high; ++i){
		arr_r[i]=arr[i];
	}

	i=low; j=mid+1;
	while(i<=mid && j<=high){
		if(arr_l[i]>arr_r[j]){
			ins+=(mid-i+1);
			++j;
		}else{
			++i;
		}
	}

	i=low; j=mid+1; k=low;
	while(i<=mid && j<=high){
		if(arr_l[i]<arr_r[j]){
			arr[k++]=arr_l[i++];
		}else{
			arr[k++]=arr_r[j++];
		}
	}

	while(i<=mid){ arr[k++]=arr_l[i++]; }
	while(j<=high){ arr[k++]=arr_r[j++]; }
}