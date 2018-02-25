#include<bits/stdc++.h>
using namespace std;
#define mod 1000000000+7
#define lln long long int

lln my_pow(lln a,lln b);

int main()
{
	lln a,b;
	lln t;
	scanf("%lld",&t);

	while(t--){
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",my_pow(a,b));
		// prllnf("%d\n",lln(pow(2,5))%100);
	}

	return 0;
}

lln my_pow(lln a,lln b){

	// lln temp=b*b;
	// prllnf("inside my_pow\n");
	if(b==0) return 1;
	else if(b%2==0){
		// prllnf("inside b is even\n");
		return int(pow(my_pow(a,b/2),2));
	}else{
		// prllnf("inside b is odd\n");
		return (a)*(int)(pow(my_pow(a,b/2),2));
	}
}