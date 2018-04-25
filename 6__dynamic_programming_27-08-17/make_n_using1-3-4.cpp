#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1e18

ll tell_ans(ll n);
ll n,ans,dp[1000001];
int i,k;

int main()
{
	scanf("%lld",&n);
	memset(dp,-1,sizeof(dp));
	ans=tell_ans(n);
	printf("%lld\n",ans);
	return 0;
}

ll tell_ans(ll n)
{
	ll a,b,c;
	if(n<0) return 0;
	if(n==1) return 1;
	if(n==3) return 2;
	if(n==4) return 4;
	if(dp[n]!=-1) return dp[n];
	a=tell_ans(n-1);
	b=tell_ans(n-3);
	c=tell_ans(n-4);
	return dp[n]=a+b+c;
}

