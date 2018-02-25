#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,flag;
	scanf("%d",&n);
	while(n--){
		flag=0;
		scanf("%d %d",&x,&y);
		if(x%2==0 && y%2==0 && x>=0 && y>=0){
			if(x==y || x-y == 2){
				flag=1;
				printf("%d\n",x+y);
			}			
		}else if(x%2!=0 && y%2!=0 && x>=0 && y>=0){
			if(x==y || x-y == 2){
				flag=1;
				printf("%d\n",x+y-1);
			}						
		}
		if(flag==0)
			printf("No Number\n");
	}

	return 0;
}








