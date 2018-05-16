#include<bits/stdc++.h>
using namespace std;
#define lln long long int 
#define max 10000001
bool is_poisioned(int x);
lln prime[max];

int main()
{
	lln i,j,n,x;
	for(i=1; i<max; ++i){
		prime[i]=1;     // assuming every number<n is a prime
	}
	for(i=2; i*i<max; ++i){
		if(prime[i]){
			for(j=i*i; j<max; j+=i){
				prime[j]=0;          // all i's divisible by j's are not prime so set them=0
			}
		}
	}

	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&x);
		// printf("%lld\n",prime[x]);
		if(is_poisioned(x)){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}

bool is_poisioned(int x){
	if(prime[x]) return true;
	else{
		int temp=pow(x,0.5);
		if(prime[temp] && pow(temp,2)==x){
			return true;
		}else{
			return false;
		}	
	}
}
