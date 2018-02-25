#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int friends[100001];

int main()
{

	int t,flag,i,sc;
	int n,f,sum=0;

	scanf("%d",&t);
	sc=t;
	while(t--){
		flag=0; sum=0;
		scanf("%d %d",&n,&f);
		for(i=0; i<f;++i){
			scanf("%d",&friends[i]);
		}
		sort(friends,friends+f);
		for(i=f-1; i>=0; --i){
			sum+=friends[i];
			// printf("%d\n",sum);
			if(sum>=n){
				flag=1;
				printf("Scenario #%d:\n%d\n",sc-t,f-i);
				break;
			}
		}
		if(!flag)
			printf("Scenario #%d:\nimpossible\n",sc-t);
	}

	return 0;
}
