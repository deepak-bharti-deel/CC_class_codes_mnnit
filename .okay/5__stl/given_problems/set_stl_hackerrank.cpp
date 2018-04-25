#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1e18

void put_here(ll a, ll j);

ll x;
int i,q,y;

int main()
{
	set <ll> cool_set;
	set <ll>::iterator it;

	scanf("%d",&q);
	while(q--){
		scanf("%d %lld",&y,&x);
		if(y==1){
			cool_set.insert(x);
		}else if(y==2){
			it=cool_set.find(x);
			if(it!=cool_set.end()){
				cool_set.erase(x);
			}
		}else{
			it=cool_set.find(x);
			if(it==cool_set.end()){
				cout<<"No\n";
			}else{
				cout<<"Yes\n";
			}
		}
	}
	return 0;
}






