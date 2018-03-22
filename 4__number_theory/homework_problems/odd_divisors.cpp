#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll l,r,sum,sum_odd_divs[1000001]; 

int main()
{
	int t,i,j;

	for(i=1; i<=100001; ++i){
		for(j=i; j<=100001; j+=i){
			if(i%2==1)
				sum_odd_divs[j]+=i;
		}
	}


	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&l,&r);
		sum=0;
		for(i=l; i<=r; ++i){		
			sum+=sum_odd_divs[i];
		}
		printf("%lld\n",sum);
	}

	return 0;
}
