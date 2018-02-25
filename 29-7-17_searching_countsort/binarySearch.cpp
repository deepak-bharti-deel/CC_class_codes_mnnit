#include<bits/stdc++.h>
using namespace std;
int binary_search(int x, int n);

int arr[10001];
int main(){

	int t,n,i,x;
	cin>>t;
	while(t--){
		cout<<"no of elements??\n";
		cin>>n;
		cout<<"enter all the elements\n";
		for(i=0; i<n; ++i){
			cin>>arr[i];
		}
		cout<<"which element to search?";
		cin>>x;
		int ans = binary_search(x,n);
		if(ans==-1){
			cout<<"element not found in array\n";
		}else{
			cout<<"element found at "<<ans<<"\n";
		}
	}

	return 0;
}

int binary_search(int x, int size)
{

	int start = 0;
	int end = size-1, mid;

	mid = start + (end-start)/2;
	cout<<"start"<<start<<" end"<<end<<" mid"<<mid<<"\n";

	while(start<=end){
		if(arr[mid]==x){
			return mid;
		}else if(arr[mid]>x){
			end   = mid-1;
		}else{
			start = mid+1;
		}
		mid = start + (end-start)/2;
	}

	return -1;
}