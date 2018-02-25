#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,arr[100001],f[100001]={0};
	scanf("%d",&n);

	for(i=0; i<n; ++i){
		scanf("%d",&arr[i]);
		++f[arr[i]];
	}

	sort(arr,arr+n);

	for(i=0; i<n; ++i){
		if(f[arr[i]]){
			printf("%d %d\n",arr[i],f[arr[i]]);
			f[arr[i]]=0;
		}
	}

	return 0;
}


