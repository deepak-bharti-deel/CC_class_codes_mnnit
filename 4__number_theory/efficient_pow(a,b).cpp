#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000000+7

ll ans,a,b,power[50];

int main()
{
	int i;
	scanf("%lld %lld",&a,&b);
	power[0]=a;
	for(i=1; i<32; ++i){
		power[i]=power[i-1]%mod *power[i-1]%mod;
		power[i]%=mod;
		// cout<<power[i]<<"\n";
	}
	cout<<"next\n";
	ans=1;
	for(i=0; i<32; ++i){
		if((b&(1<<i))>0){
			ans=ans%mod * power[i]%mod;
			ans%=mod;
			// cout<<power[i]<<" "<<ans<<"\n";
		}
	}

	printf("a to b is %lld\n",ans);

	return 0;
}