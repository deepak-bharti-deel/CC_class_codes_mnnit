#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,arr[100001];
	int f[100001]={0};
	scanf("%d %d",&n,&k);
	for(i=0; i<n; ++i){
		scanf("%d",&arr[i]);
		++f[arr[i]];
	}
	sort(arr,arr+n);
	int j,pairs=0;
	for(i=0,j=n-1; j>=i;){  
		int sum=arr[i]+arr[j];
		if(sum==k){
			printf("pairs:%d arr[%d]:%d arr[%d]:%d\n",pairs,i,f[arr[i]],j,f[arr[j]]);
			if(f[arr[i]]==f[arr[j]]){
				pairs=pairs+(f[arr[i]]*(f[arr[j]]-1));
				f[arr[i]]=f[arr[j]]=0;
			}else{
				pairs=pairs+(f[arr[i]]*f[arr[j]]);
				f[arr[i]]=f[arr[j]]=0;
			}

			++i; --j;
			printf("inside sum==k\n");
		}else if(sum<k){
			++i;
		}else{
			--j;
		}
	}

	printf("%d\n",pairs);

	return 0;
}




