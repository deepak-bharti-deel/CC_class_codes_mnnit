#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a0,a1,c,n,t;
int i,x,y,z,cm;

int main()
{
	string no;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld %lld",&a0,&a1,&c,&n);

		cm=(a0*10+a1)%41;
		x=a0; y=a1;
		for(i=2; i<n; ++i){
			z=(y*c + x)%10;
			cm=(cm*10+z)%41;
			x=y;
			y=z;
		}

		if(n==1 && a0==0)
			printf("YES\n");
		else if(n>1 && cm==0)
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;
}

