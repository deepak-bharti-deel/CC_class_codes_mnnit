#include<bits/stdc++.h>
using namespace std;

void tell_ans(int s,int t,int i);
int s,t,i,depth;

int main()
{
	int test;
	scanf("%d",&test);

	while(test--){
		scanf("%d %d %d",&s,&t,&i);
		depth=0;
		tell_ans(s,t,i);
	}

	return 0;
}

void tell_ans(int s,int t,int i)
{
	if(s==t){
		++depth;
		printf("%d %d\n",s,t);
		printf("%d\n",depth);
		return;
	}else if(i<s || i>t){
		printf("-1\n");
		return;
	}
	int mid=s+(t-s)/2;
	if(i<=mid){
		++depth;
		printf("%d %d\n",s,t);
		tell_ans(s,mid,i);
	}else if(i>mid){
		++depth;
		printf("%d %d\n",s,t);
		tell_ans(mid+1,t,i);
	}
}


