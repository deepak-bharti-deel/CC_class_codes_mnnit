#include<bits/stdc++.h>
using namespace std;
#define lln long long int

lln a,b,ans;
lln potions[1000001];

int main()
{
	int i;
	string visit;
	scanf("%lld %lld",&a,&b);
	cin>>visit;
	lln length=visit.length();
	potions[0]=a;
	if(visit[0]=='1') ans=(ans+potions[0]%b)%b;
	for(i=1; i<length; ++i){
		lln temp = potions[i-1];
		potions[i]= (temp%b * temp%b)%b;
		if(visit[i]=='1') ans=(ans+potions[i]%b)%b;
	}
	printf("%lld\n",ans%b);
	
	return 0;
}