#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,n,m,d;
	int power[100001];
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&m,&d);
		for(i=0; i<n; ++i){
			scanf("%d",&power[i]);
		}
		sort(power,power+n,greater<int>());
		
		for(i=0; i<n; ++i){
			while(power[i]>d && m){
				power[i]-=d;
				m--;
			}
		}

		if(m==0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}