#include <bits/stdc++.h>
using namespace std;

int fun1(int arr1[]);  // passing 1d array
int fun2(int arr2[]);  // passing 2d array

int main()
{

	int n;

	if(n&(n-1) == 0){
		// means n is of type  2^x
		// eg. n=4
		// then n= 100
		//    n-1= 011 
		// so, n& n-1 == 0
	}

	if(n&1 == 0){
		// n is even else its odd
		// eg. n=4   , n=100(binary)
		// n&1, (100 & 0001  == 0), n is even
	}

	return 0;
}

====>>> strcmp and strcpy works only on char strings,e.g => char str[100];
// (strcmp(char_str1,char_str2)>0)  if char_str1     > cha_str2
							  // <0   if char_str1  > cha_str2
							  // ==0   if char_str1 == cha_str2
// strcpy(char_str1,char-str2)  // copies str_2 to char_str1

====>>> passing 1d and 2d array

int fun1(int arr1[]);  // passing 1d array
int fun2(int arr2[][10]);  // passing 2d array, here u need to tell tha size of column

============>>>>>>>>>

sort(arr,arr+n);    		== sorting arrays


=============>>

scaning no until EOF___
while(scanf("%d",&arr[i++])!=EOF);    // this will continue scanning integers until you enter  EOF(ctrl+d)


=============>>

INT_MAX = max int value
FLT_MAX = max float value

==============>>

#define ll long long 
int(a/b)  is right
ll(a/b)   is wrong
do like this
(ll)(a/b)  is okay

==============>>																													


