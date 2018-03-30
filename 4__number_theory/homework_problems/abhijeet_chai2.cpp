#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll a,ll b);
ll a,b;
int t;

int main()
{
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&a,&b);
		solve(a,b);
	}

	return 0;
}

void solve(ll a,ll b)
{
	if(a==b){
		printf("0 Advitiya\n");
		return;
	}
	ll temp=max(a,b)/__gcd(a,b);
	if((temp-2)%2==1){
		printf("%lld Abhijeet\n",abs(temp-2));
	}else{
		printf("%lld Advitiya\n",abs(temp-2));
	}
}