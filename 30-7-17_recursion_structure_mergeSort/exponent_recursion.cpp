#include<bits/stdc++.h>
using namespace std;

int power(int a,int b);

int main()
{
	int a,b;

	scanf("%d %d",&a,&b);
	printf("%d\n",power(a,b));

	return 0;
}

int power(int a,int b)
{
	if(b==1){
		return a;
	}else{
		return a*power(a,b-1);
	}

}