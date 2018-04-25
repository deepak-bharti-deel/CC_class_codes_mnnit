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
string name;

bool cmp(pair<string,ll> p1, pair<string,ll> p2)
{
	if(p1.s>p2.s) return true;
	if(p1.s==p2.s && p1.f<p2.f) return true;
	return false;
}

int main()
{
	vector < pair<string, ll> > marks;
	scanf("%lld",&n);

	for(i=0; i<n; ++i){
		cin>>name;
		scanf("%lld",&a);
		marks.pb(mp(name,a));
	}

	sort(marks.begin(),marks.end(),cmp);

	for(i=0; i<n; ++i){
		cout<<marks[i].f<<" "<<marks[i].s<<"\n";
	}

	return 0;
}