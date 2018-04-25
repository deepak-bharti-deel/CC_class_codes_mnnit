#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1e18

bool cmp(pair<ll,int> p1,pair<ll,int> p2)
{
	if(p1.f>p2.f) return true;
	if(p1.f == p2.f){
		if(p1.s<p2.s) return true;
	}
	return false;
}

ll n,m,q,s,t;
int i,k;

int main()
{
	vector< pair<ll,int> > scores;

	scanf("%lld",&n);
	scores.pb(mp(inf,0));
	for(i=1; i<=n; ++i){
		scanf("%lld %lld",&s,&m);
		scores.pb(mp(s*m,i));
	}

	sort(scores.begin(),scores.end(),cmp);

	scanf("%lld",&q);
	for(i=1; i<=q; ++i){
		scanf("%d",&k);
		printf("%d\n",scores[k].s);
	}

	return 0;
}