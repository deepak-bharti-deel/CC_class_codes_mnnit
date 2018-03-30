#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,gcd,arr[1001];
int t,i;

int main()
{
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		gcd=0;
		for(i=0; i<n; ++i){
			scanf("%d",&arr[i]);
			gcd=__gcd(gcd,arr[i]);
		}
		printf("%d\n",gcd);
	}

	return 0;
}

