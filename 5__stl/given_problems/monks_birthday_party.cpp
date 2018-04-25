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
string str;

int main()
{
	map <string, int> name;
	vector<string> guests;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(i=0; i<n; ++i){
			cin>>str;
			if(name[str]==1)
				continue;
			guests.pb(str);
			name[str]=1;
		}

		sort(guests.begin(), guests.end());
		for(i=0; i<guests.size(); ++i){
			cout<<guests[i]<<"\n";
		}
		name.clear();
		guests.clear();
	}

	return 0;
}