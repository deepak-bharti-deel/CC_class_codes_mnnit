#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int factors[1000007];
int n,i,j;

int main()
{
	cin>>n;
	for(i=1; i<=n; ++i){
		for(j=i; j<=n; j+=i){
			++factors[j];
		}
	}

	int a;
	cin>>a;
	cout<<"factors of "<<a<<" are "<<factors[a]<<"\n";

	return 0;
}