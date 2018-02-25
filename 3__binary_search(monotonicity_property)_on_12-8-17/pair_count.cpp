#include<bits/stdc++.h>
using namespace std;
#define lln long long int

lln arr[1000001],n,k,pair_count;
lln freq[1000001];

int main()
{
	int i;
	scanf("%lld %lld",&n,&k);
	for(i=0; i<n; ++i){
		scanf("%lld",&arr[i]);
		++freq[arr[i]];
	}

	for(i=1; i<=k/2; ++i){
		if(freq[i] && freq[k-i]){
			if(freq[i]==freq[k-i]){
				pair_count+=(freq[i]*(freq[k-i]-1));
			}else if(freq[i]!=freq[k-i]){
				pair_count+=(freq[i]*freq[k-i]);
			}
		}
	}

	printf("%lld\n",pair_count);

	return 0;
}