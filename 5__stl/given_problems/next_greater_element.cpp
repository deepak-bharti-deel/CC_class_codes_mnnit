#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ng_no,arr[10001],i;
	int next;
	scanf("%d",&n);
	for(i=0; i<n; ++i){
		scanf("%d",&arr[i]);		
	}

	stack <int> s;
	s.push(arr[0]);
	for(i=1; i<n; ++i){
		next=arr[i];
		while(!s.empty() && next>s.top()){
			printf("%d %d\n",s.top(), next);
			s.pop();
		}
		s.push(arr[i]);
	}
	while(!s.empty()){
		printf("%d -1\n",s.top());
		s.pop();
	}

	return 0;
}