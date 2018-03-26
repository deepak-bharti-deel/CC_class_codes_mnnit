#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll mod,t,a,ans,potions[1000001];
string str;

int main()
{
	int i,length;
	scanf("%lld %lld",&a,&mod);
	cin>>str;
	potions[0]=a;
	ans=0;
	if(str[0]=='1')
		ans=a%mod;
	length=str.length();
	for(i=1; i<length; ++i){
		potions[i]=(potions[i-1]%mod*potions[i-1]%mod)%mod;
		if(str[i]=='1')
			ans=(ans%mod+potions[i])%mod;
	}
	printf("%lld\n",ans);

	return 0;
}