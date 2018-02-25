#include <bits/stdc++.h>
using namespace std;

bool is_safe(int i,int j);
int path[100][100],row,column;

int main()
{
	int i,j;
	scanf("%d %d",&row,&column);

	for(i=0; i<row; ++i){
		for(j=0; j<column; ++j){
			scanf("%d",&path[i][j]);
		}
	}
	if(is_safe(0,0)){ printf("got the way\n"); }
	else{ printf("oopss, stuck in the way\n"); }

	return 0;
}

//path[i][j]=1; means this is a open path and 0 means a blocked path

bool is_safe(int i,int j){

	if(i==row-1 && j==column-1){
		printf("(%d,%d)\n",i,j);
		return true;
	}
	else if(i==row || j==column || path[i][j]==false) return false;
	// printf("at %d,%d\n",i,j);
	
	bool a=is_safe(i,j+1);
	if(a){
		printf("(%d,%d) ",i,j+1);
		return true;
	}
	int b=is_safe(i+1,j);
	if(b){
		printf("(%d,%d) ",i+1,j);
	}
	return b;
}
