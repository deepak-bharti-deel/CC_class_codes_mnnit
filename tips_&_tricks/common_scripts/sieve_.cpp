
int mark[10001];

void sieve(){
	int i,j;
	for(i=2; i<=n; ++i){
		for(j=i; j<=n; j+=i;){
			mark[j]=1;
		}
	}
}

// all the unmarked no are prime now
// i.e. if mark[n]==0 then n is prime