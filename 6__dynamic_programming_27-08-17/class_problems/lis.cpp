#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)

int main()
{
	int n,i,j,arr[100001];
	int lisat[1000001];
	scanf("%d",&n);
	fl(i,n){
		scanf("%d",&arr[i]);
	}

	fl(i,n){ lisat[i]=1; }
	
	int flag;

	fl(i,n){
		flag=0;
		fl(j,i){
			cout<<arr[j]<<" "<<arr[i]<<"\n";
			if(arr[j]<arr[i]){
				lisat[i]=max(lisat[i],lisat[j]); flag=1;
			}
		}
		if(flag){ lisat[i]+=1; }
	}
	int ans=1;
	fl(i,n){
		printf("%d ",lisat[i]);
	}
	cout<<"\n";
	fl(i,n){
		if(lisat[i]>ans)
			ans=lisat[i];
	}

	printf("ans is %d\n",ans);

	return 0;
}