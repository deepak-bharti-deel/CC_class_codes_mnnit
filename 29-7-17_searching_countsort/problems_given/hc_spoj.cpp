#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t,i,n,arr[100001];
	string player[100001];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0; i<n; ++i){
			cin>>player[i];
			if(player[i]=="lxh"){
				arr[i]=1;
			}else{ 
				arr[i]=0; 
			}
		}
		int ans=arr[0];
		for(i=1; i<n; ++i){
			ans=(ans^arr[i]);
		}

		if(ans==0)
			printf("hhb\n");
		else
			printf("lxh\n");
	}

	return 0;
}
