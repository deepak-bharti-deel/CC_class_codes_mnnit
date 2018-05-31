#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)
#define pb push_back


void bfs(int node);
int n,node,a,b,i,j,max_node,temp,visited[100001],distance_from_root[10001];
vector <int> graph[100001];
vector <int> ::iterator it;

int main()
{
	memset(visited,0,sizeof(visited));
	printf("Enter the no of edges\n");
	scanf("%d",&n);
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
	for(i=0; i<max_node; ++i){
		if(graph[i].size()>0){
			for(j=0; j<graph[i].size(); ++j)
				printf("%d %d\n",i,graph[i][j]);
		}
	}
	// cout<<max_node<<"\n";
	printf("Enter a node to run bfs from\n");
	scanf("%d",&node);
	bfs(node);

	fl(i,max_node){
		if(visited[i]){
			// printf("visited node %d %d\n",i,visited[i]);
			printf("distance of %d from root is %d\n",i,distance_from_root[i]);
		}
	}

	return 0;
}
void bfs(int node)
{
	printf("inside bfs\n");
	int i;
	queue <int> nodes;
	nodes.push(node);
	distance_from_root[node]=0;
	while(!nodes.empty()){
		printf("inside while\n");
		int front_node=nodes.front();
		printf("front_node %d\n",front_node);
		visited[front_node]=1;
		fl(i,graph[front_node].size()){
			if(!visited[graph[front_node][i]]){
				nodes.push(graph[front_node][i]);
				visited[graph[front_node][i]]=1;
				distance_from_root[graph[front_node][i]]=distance_from_root[front_node]+1;
			}
		}
		printf("removing front_node %d\n",front_node);
		nodes.pop();
		printf("new front_node is %d\n",nodes.front());		
	}
}

/*
test case
8
2 3
2 5
2 4
8 4
8 9
9 4
3 6
5 2 


2 4
3 2
5 2
6 3
8 4
9 8



*/
