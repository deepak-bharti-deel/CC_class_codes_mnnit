#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s);

int main()
{
	string s;
	cin>>s;
	// cout<<s.substr(1,s.length()-2);
	if(is_palindrome(s)){
		printf("s is a palindrome string\n");
	}else{
		printf("s is not a palindrome string\n");
	}

	return 0;
}

bool is_palindrome(string s)
{

	if(s.length()<2){
		return true;
	}else{
		char first_char = s[0];
		char last_char = s[s.length()-1];
		if(first_char==last_char){
			return is_palindrome(s.substr(1,s.length()-2));
		}else{
			return false;
		}
	}
}







