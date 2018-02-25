#include<bits/stdc++.h>
#define offset 100000
using namespace std;
int main()
{
	int i,n,arr[100001],hash_arr[200002]={0};
	
	scanf("%d",&n);
	
	for(i=0; i<n; ++i){
		scanf("%d",&arr[i]);
		++hash_arr[arr[i]+offset];
	}

	for(i=0; i<200002; ++i){
	if(hash_arr[i]){
		printf("%d %d\n",i-offset,hash_arr[i]);
		}
	}

	return 0;
}