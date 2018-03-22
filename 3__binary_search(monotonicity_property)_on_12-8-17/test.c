#include <bits/stdc++.h>
using namespace std;
int freq[27],n;
char arr[100005];
int totDisCharacters(){
	int cnt = 0;
	for(int i = 0; i<26 ; i++)
		if(freq[i])
			cnt++;
	return cnt;
}
bool solve(int wind){	
	//creating initial window
	for(int i = 0; i < wind; i++)
		freq[arr[i]-'a']++;
	if( totDisCharacters() == 26)
		return true;
	for(int i = wind; i < n; i++){
		//shifting window
		freq[ arr[i] - 'a' ]++; 
		freq[arr[i-wind]-'a']--;
 
		if( totDisCharacters() == 26 )
			return true;
	}
	for(int i=0; i<26 ; i++)
		freq[i]=0;
	return false;
}
int binarySearch(){
	int lo = 1, hi = n, ans =- 1;
	while(lo <= hi){
		int mid = (lo + hi)/2;
		if( solve(mid) == true ){
			ans = mid;
			hi = mid-1;
		}
		else lo = mid+1;
	}
	return ans;
}
int main(){
	// Input Format -> int n
	// Character Array-> like asdfabcdefghijklmnospqrstuvwxyzadf
	scanf("%d%*c",&n);
	for(int i=0; i<n ; i++){
		scanf("%c",arr+i);
	}
	cout<<binarySearch();
	return 0;
}