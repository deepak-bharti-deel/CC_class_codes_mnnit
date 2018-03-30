#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll my_gcd(ll a, ll b);
ll n,q,t,arr[1000001];
int i,l,r,j;

int main()
{
	vector < pair<ll,ll> > gcd_at;

	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&q);
		for(i=1; i<=n; ++i){
			scanf("%lld",&arr[i]);
		}

		for(i=1; i<=n+1; ++i){ gcd_at.push_back(make_pair(-1,-1)); }

		gcd_at[1].first=arr[1];
		gcd_at[n].second=arr[n];
		for(i=2,j=n-1; i<=n ; ++i,--j){
			gcd_at[i].first=my_gcd(arr[i],gcd_at[i-1].first);
			gcd_at[j].second=my_gcd(arr[j],gcd_at[j+1].second);
		}

		for(i=0; i<q; ++i){
			scanf("%d %d",&l,&r);

			if(l>1 && r<n)
				printf("%lld\n",my_gcd(gcd_at[l-1].first,gcd_at[r+1].second));
			else if(l>1)
				printf("%lld\n",gcd_at[l-1].first);
			else 
				printf("%lld\n",gcd_at[r+1].second);
		}
	}

	return 0;
}

ll my_gcd(ll a, ll b)
{
	if(b==0) return a;
	return my_gcd(b,a%b);
}
