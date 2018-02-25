#include<bits/stdc++.h>
using namespace std;
#define lli long long int 

lli pow2(int x,int a);

int main()
{
	lli i,n,c,d;
	lli a,b,t;

	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		a=log2(n);
		b=a+1;
		c= pow2(2,a);
		d= pow2(2,b);
		if(abs(n-c) > abs(n-d)){
			printf("%lld\n",abs(n-d));
		}else{
			printf("%lld\n",abs(n-c));
		}
	}

	return 0;
}


lli pow2(int x,int a)
{
	lli b=pow(x,a/2);
	if(a==0) return 1;
	else if(a%2==0) return b*b;
	else return b*b*x;
}





