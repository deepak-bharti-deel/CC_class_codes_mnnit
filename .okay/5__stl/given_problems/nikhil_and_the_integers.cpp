#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1e18

bool cmp(pair<int,int> p1,pair<int,int> p2)
{
	if(p1.s>p2.s) return true;
	else if(p1.s==p2.s && p1.f>p2.f) return true;
	return false;
}

int n,m,k,t,q,a;
int i;

int main()
{
	map <int,int> freq;
	map <int,int> ::iterator it;
	vector < pair<int,int> > votes;
	scanf("%d",&n);

	for(i=0; i<n; ++i){
		scanf("%d",&a);
		freq[a]+=1;	
	}

	for(it=freq.begin(); it!=freq.end(); ++it){
		votes.pb(*it);
	}

	for(i=-1e5; i<=1e5; ++i){
		if(!freq[i])
		votes.pb(mp(i,0));
	}

	sort(votes.begin(),votes.end(),cmp);
	scanf("%d",&q);
	while(q--){
		scanf("%d",&k);
		printf("%d\n",votes[k-1].f);
	}

	return 0;
}
