#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a0,a1,c,n,t;
int i;

int main()
{
	string no;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld %lld",&a0,&a1,&c,&n);
		no=to_string(a0)+to_string(a1);
		for(i=2; i<n; ++i){
			no+=to_string(((no[i-1]-'0')*c + (no[i-2]-'0'))%10);
		}
		if(stoi(no)%41==0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}