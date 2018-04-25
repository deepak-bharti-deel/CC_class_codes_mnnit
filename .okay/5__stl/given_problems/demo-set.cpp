#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1e18

void put_here(ll a, ll j);

int n,j,a;
int i,lb,ub;

int main()
{
	set <int> first_set;
	set <int> ::iterator it;

	scanf("%d",&n);
	for(i=0; i<n; ++i){
		scanf("%d",&a);
		first_set.insert(a);
	}

	for(it=first_set.begin(); it!=first_set.end(); ++it){
		printf("%d ",*it);
	}
	cout<<"\n";
	first_set.erase(33);
	for(it=first_set.begin(); it!=first_set.end(); ++it){
		printf("%d ",*it);
	}
	cout<<"\n";
	cout<<*first_set.lower_bound(4)<<"\n";
	cout<<*first_set.upper_bound(4)<<"\n";

	return 0;
}






