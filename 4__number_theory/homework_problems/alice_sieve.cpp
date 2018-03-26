#include<bits/stdc++.h>
using namespace std;

int i,t,n;

int main()
{
	// printf("%0.0f\n",ceil(2.5));
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n%2==1){
			printf("%0.0f\n",ceil(float(n)/2));
		}
		else
			printf("%d\n",n/2);
	}

	return 0;
}