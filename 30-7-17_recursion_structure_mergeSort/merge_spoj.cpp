#include<bits/stdc++.h>
using namespace std;
void merge_sort(int low,int high);
void merge(int low,int high);
int n,arr[100001],sorted_arr[100001];

int main()
{
	int i,n,j;
	i=0;
	while(scanf("%d",&arr[i++])!=EOF);
	// printf("i=%d\n",i);
	merge_sort(0,i-2);

	for(j=0; j<i-1; ++j){
		printf("%d ",arr[j]);
	}
	printf("\n");
	return 0;
}

void merge_sort(int low,int high)
{
	// printf("inside merge_sort\n");
	if(low==high) return;
	int mid;
	mid=low+(high-low)/2;
	merge_sort(low,mid);
	merge_sort(mid+1,high);

	merge(low,high);
}

void merge(int low,int high)
{
	// printf("inside merge\n");
	int arr_l[100001],arr_r[100001],size_l,size_r;
	int i,j,k,mid;
	mid=low+(high-low)/2;
	for(i=low; i<=mid; ++i){
		arr_l[i]=arr[i];
	}
	for(i=mid+1; i<=high; ++i){
		arr_r[i]=arr[i];
	}
                          
	i=low; j=mid+1; k=low;
 
	while(i<=mid && j<=high){ 
		if(arr_l[i]<arr_r[j]){
			arr[k++]=arr_l[i++];
		}else{
			arr[k++]=arr_r[j++];
		}
	}

	while(i<=mid){ arr[k++]=arr_l[i++]; }
	while(j<=high){ arr[k++]=arr_r[j++]; }

}