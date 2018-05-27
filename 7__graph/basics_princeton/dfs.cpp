#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)
#define pb push_back

void dfs(int node);
int node,n,a,b,i,j,max_node,temp,visited[100001];
vector <int> graph[100001];
vector <int> ::iterator it;

int main()
{

	memset(visited,0,sizeof(visited));
	printf("Enter the no of edges\n");
	scanf("%d",&n);
	// max_node, just a utility
	max_node=-1;
	for(i=0; i<n; ++i){
		scanf("%d%d",&a,&b);
		graph[a].pb(b);
		graph[b].pb(a);
		temp=max(a,b);
		if(temp>max_node)
			max_node=temp;
	}
	max_node+=1;

	printf("Adjacany list representation of graph\n");
	fl(i,max_node){
		if(graph[i].size()>0){
			for(j=0; j<graph[i].size(); ++j)
				printf("%d %d\n",i,graph[i][j]);
		}
	}

	// cout<<max_node<<"\n";
	printf("Enter a node to traverse all connected nodes\n");
	scanf("%d",&node);
	dfs(node);

	//visited nodes
	fl(i,max_node){
		if(visited[i])
			printf("%d %d\n",i,visited[i]);
	}
	
	return 0;
}

void dfs(int node)
{
	int i;
	visited[node]=1;
	// adjacency list of node
	fl(i,graph[node].size()){
		cout<<graph[node][i]<<"\n";
	}
	// visiting neighbours of node
	fl(i,graph[node].size()){
		if(!visited[graph[node][i]]){
			dfs(graph[node][i]);
		}
	}
}