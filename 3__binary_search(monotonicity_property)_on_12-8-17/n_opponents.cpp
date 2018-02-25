/*Q3. 
The strength of a person A is given number by k. 
Find the minimum number of opponents needed to defeat A if the strength of let’s say 
n opponents is sum of numbers from 1 to n.A can be defeated if the total strength of 
opponents is more than A’s strength.
*/
#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli k,t,low,high,mid,ans;

int main()
{

	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&k);
		low = 1; high=2e9;
		ans=-1;
		while(low<=high){
			mid = low+(high-low)/2;
			if(mid*(mid+1)/2 > k){
				ans=mid;
				high=mid-1;
			}else{
				low=mid+1;
			}
		}
		printf("%lld\n",ans);
	}


	return 0;
}