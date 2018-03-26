#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll zeroes_in(ll n);
int t;
ll n;

int main()
{
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",zeroes_in(n));
	}

	return 0;
}

ll zeroes_in(ll n)
{
	ll temp=n;
	ll a,b,i,count2,count3;
	i=1; count3=0; count2=0;
	a=int(temp/2);
	while(a > 0){
		count2+=a;
		a=int(temp/(pow(2,++i)));
	}
	temp=n; i=1;
	a=int(temp/5);
	while(a > 0){
		count3+=a;
		a=int(temp/(pow(5,++i)));
	}
	// cout<<count2<<" "<<count3<<"\n";
	return min(count2,count3);
}