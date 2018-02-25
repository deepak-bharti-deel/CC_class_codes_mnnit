#include<bits/stdc++.h>
using namespace std;
int main()
{

	int i,freq[150]={0};
	string str;

		cin>>str;

		int length=str.length();

		for(i=0; i<length; ++i){
			++freq[str[i]];
		}

		int vowel_count=0;

		for(i=65; i<=122; ++i){
			if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='y' && freq[i]){
				vowel_count+=freq[i];
			}
			else if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U' || i=='Y' && freq[i]){
				vowel_count+=freq[i];
			}			
		}

		cout<<vowel_count<<"\n";

	return 0;
}

// A-Z   65-90
// a-z   97-122
