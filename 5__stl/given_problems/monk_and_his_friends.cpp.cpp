#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1e18

ll n,m,t,a;
int i;

int main()
{
	map <ll, int> candies;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&m);
		for(i=1; i<=n; ++i){
			scanf("%lld",&a);
			candies[a]=1;
		}
		for(i=1; i<=m; ++i){
			scanf("%lld",&a);
			if(candies[a]==1) printf("YES\n");
			else printf("NO\n");			
			candies[a]=1;
		}
		candies.clear();
	}

	return 0;
}