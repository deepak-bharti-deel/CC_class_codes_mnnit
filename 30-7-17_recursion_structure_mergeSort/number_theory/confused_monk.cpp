#include <bits/stdc++.h>
using namespace std;
#define lln long long int

lln get_gx();
lln ans_pow(lln fx,lln gx);
lln find_gcd(lln a,lln b);

lln mod=1000000000+7;
lln gcd,n,fx,gx,arr[101];

int main()
{
	int i;
	fx=1;
	scanf("%lld",&n);

	for(i=0; i<n; ++i){
		scanf("%lld",&arr[i]);
		fx*=arr[i];
		fx=fx%mod;
		// cout<<fx<<"\n";
	}
	get_gx();
	// printf("%lld\n",gx);
	// printf("fx= %lld gcd=%lld\n",fx,gx);
	printf("%lld\n",ans_pow(fx,gx)%mod);

	return 0;
}


lln get_gx()
{
	gx=arr[0];
	for(int i=0; i<n; ++i){
		if(arr[i]==1){
			gx=1; break;
		}else{
			gx=find_gcd(gx,arr[i])%mod;	
		}
	}
	// printf("found gx %lld\n",gx);
}

lln ans_pow(lln fx,lln gx)
{
	if(gx==0) return 1;
	if(gx%2==0){
		gx/=2;
		lln temp = ans_pow(fx,gx)%mod,2;
		return (temp%mod * temp%mod)%mod;
	}else if(gx%2!=0){
		return (fx)*ans_pow(fx,gx-1)%mod;
	}
}

lln find_gcd(lln a,lln b){
	// printf("inside gcd function\n");
	if(a==0) return b%mod;
	else if(b==0) return a%mod;
	else return find_gcd(b,a%b)%mod;
}



