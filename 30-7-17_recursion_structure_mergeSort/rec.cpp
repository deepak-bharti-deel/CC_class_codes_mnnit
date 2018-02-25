#include<bits/stdc++.h>
using namespace std;

void print_stars(int n)
{
	// printf("*");
	if(n>=1){
		printf("*");
	print_stars(n-1);
	}
	// else{
		// printf("*");
	// }
}

int main()
{
	int n;
	scanf("%d",&n);
	print_stars(n);
	printf("\n");
	return 0;
}






























