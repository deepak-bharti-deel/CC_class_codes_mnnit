#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t,r,max_ur,i,freq[10]={0};
	float ball[100001];
	scanf("%d",&t);
	
	while(t--){
		memset(freq,0,sizeof(freq));
		max_ur=0;
		scanf("%d",&r);
		for(i=0; i<r; ++i){
			
			scanf("%f",&ball[i]);
		}

		for(i=0; i<r; ++i){
			++freq[int(ball[i])/80];
		}

		for(i=0; i<6; ++i){
			if(freq[i]>=2){
				max_ur+=2;
			}else{
				max_ur+=freq[i];
			}
		}

		printf("%d\n",min(max_ur,r));
	}

	return 0;
}       
