 // Q4. Find the minimum size of subarray which contains all the letters of alphabet atleast once.
//        Const:-
// 	1 <= n <= 100000

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll char_count();
ll ans();
bool solve(ll mid);

ll length,chars,freq[150];
string str;
int i;

int main()
{
	cin>>str;
	length=str.length();

	printf("%lld\n",ans());

	return 0;
}

ll char_count()
{	
	cout<<"counting fres\n";
	ll chars=0;
	for(i=97; i<123; ++i){ 
		// cout<<freq[i]<<"\n";
		if(freq[i]){ 
			++chars;
		}else{ 
			printf("not found %c\n",i);
		} 
	}
	cout<<"returning "<<chars<<"\n";
	return chars;
}

bool solve(ll mid)
{
	for(i=0; i<=mid; ++i){
		++freq[str[i]];
	}
	cout<<chars<<"\n";
	if(char_count()==26) {
		cout<<"found all chars returning\n";
		return true;}
	for(i=mid; i<length; ++i){
		++freq[str[i]];
		--freq[str[i-mid]];
		if(char_count()==26) { 
			cout<<"found all chars returning\n"; return true;}
		cout<<chars<<"\n";
	}
	for(i=60; i<150; ++i) freq[i]=0;
	cout<<"Not found all chars returning\n";
	return false;
}

ll ans()
{
	ll current_ans=-1;
	ll low=0,high=length-1,mid;
	while(low<=high){
		mid=low+(high-low)/2;
		cout<<"solving for "<<mid<<"\n";
		if(solve(mid)){
			cout<<mid<<" is okay \n";
			current_ans=mid;
			high=mid-1;
		}else{
			cout<<mid<<" is not okay \n";
			low=mid+1;
		}
	}
	return current_ans+1;
}


























