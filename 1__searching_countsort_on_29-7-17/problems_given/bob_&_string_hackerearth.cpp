#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,freqs[150],freqt[150];
	int lt,ls;
	string strs,strt;

	scanf("%d",&t);
	while(t--){
		memset(freqt,0,sizeof(freqt));
		memset(freqs,0,sizeof(freqs));
		cin>>strs>>strt;
		lt=strt.length(); ls=strs.length();
		for(i=0; i<lt; ++i){
			++freqt[strt[i]];
		}
		for(i=0; i<ls; ++i){
			++freqs[strs[i]];
		}
		int ans=0;
		for(i=65; i<123; ++i){
			if(freqt[i]){
				if(freqt[i]>freqs[i]){
					ans+=freqt[i]-freqs[i];
					freqt[i]-=freqt[i]-freqs[i];
				}			
			}
		}
		for(i=65; i<123; ++i){
			if(freqs[i]){
				if(freqs[i]>freqt[i]){
					ans+=freqs[i]-freqt[i];
				}
			}
		}
		printf("%d\n",ans);

	}

	return 0;
}