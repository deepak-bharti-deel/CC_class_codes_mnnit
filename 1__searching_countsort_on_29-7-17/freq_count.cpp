#include<bits/stdc++.h>
using namespace std;
int main()
{

	int i,t,freq[150]={0};
	string str;

	cin>>t;
	while(t--){
		cin>>str;
		int length=str.length();
		for(i=0; i<length; ++i){
			++freq[str[i]];
		}
		for(i='a'; i<='z'; ++i){
			if(freq[i]){
				printf("%c %d\n",i,freq[i]);
			}
		}
		memset(freq,0,sizeof(freq));
	}


	return 0;
}