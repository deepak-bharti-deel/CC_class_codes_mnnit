#include <bits/stdc++.h>
using namespace std;

bool place_queens_after(int i); 
bool is_okay(int i,int j);
int position[101],n;

int main()
{	
	int i,j;
	scanf("%d",&n); // n is no of queens to be placed and also the size of chess

	if(place_queens_after(0)){  // currently queen is at (i,j) now decide its nex all positions
		// printf("Queens placed successfully at following positions\n");
		printf("YES\n");
		for(i=0; i<n; ++i){
			for(j=0; j<n; ++j){
				if(position[i]==j){
					printf("1 ");
				}else{
					printf("0 ");
				}
			}
		printf("\n");
			// printf("(%d,%d) ",i,position[i]); // position[i] tells the column at which queen is placed in ith row 
		}
	}else{
		// printf("Could not place all queens successfully\n");
		printf("NO\n");
	}

	return 0;
}

bool place_queens_after(int i){

	int j;
	if(i==n){
		// printf("placed on (%d,%d)\n",i-1,position[i-1]);
		return true;
	}
	for(j=0; j<n; ++j){
		if(is_okay(i,j)){
			position[i]=j;
			int temp = place_queens_after(i+1);
			if(temp){
				// printf("placed on (%d,%d)\n",i,position[i]);
				return true;
			}
			else{
				position[i]=0;
			}
		}
	}
	return 0;
}

bool is_okay(int i,int j){

	int k;
	for(k=0; k<i; ++k){
		if(position[k]==j || abs(i-k)==abs(position[k]-j)){
			return false;
		}
	}
	return true;
}




