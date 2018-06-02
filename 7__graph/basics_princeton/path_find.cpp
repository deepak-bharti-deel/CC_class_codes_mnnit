#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(i=0; i<n; ++i)
#define pb push_back

void dfs(int node);
void path(int edgeto_node,int to_node);

int edgeto_node,to_node,node,n,a,b,i,j,max_node,temp,visited[100001];
vector <int> graph[100001];
vector <int> ::iterator it;
int edgeto[10001];

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
	printf("Enter a node to traverse all connected nodes\n");
	scanf("%d",&node);
	dfs(node);

	// finding path edgeto s to v
	printf("Enter the source and destination to find the path between\n");
	scanf("%d%d",&edgeto_node,&to_node);

	path(edgeto_node,to_node);
	// for(i=0; i<max_node; ++i){
	// 	if(visited[i])
	// 		printf("%d %d\n",i,visited[i]);
	// }
	
	return 0;
}

void dfs(int node)
{
	int i;
	visited[node]=1;
	printf("visited %d\n",node);
	for(i=0; i<graph[node].size(); ++i){
		cout<<graph[node][i]<<"\n";
	}
	for(i=0; i<graph[node].size(); ++i){
		printf("%d\n",visited[graph[node][i]]);
		if(!visited[graph[node][i]]){
			edgeto[graph[node][i]]=node;
			// edgeto[node]=graph[node][i];
			printf("going to visit node %d\n",graph[node][i]);
			dfs(graph[node][i]);
		}
	}
}

void path(int edgeto_node,int to_node)
{
	printf("finding path\n");
	for(i=0; i<max_node; ++i){
		if(edgeto[i])
			printf("%d %d\n",i,edgeto[i]);
	}

	// cout<<"\n";
	// stack <int> required_path;
	// for(node=to_node; node!=edgeto_node; node=edgeto[node]){
	// 	printf("node %d edgeto node %d\n",node,edgeto[node]);
	// 	required_path.push(node);
	// 	cout<<"top "<<required_path.top()<<" ";
	// }
	// cout<<" empty check "<<required_path.empty()<<"\n";
	// printf("printing path edgeto %d to %d\n",edgeto_node,to_node);
	// cout<<edgeto_node<<" ";
	// while(!required_path.empty()){
	// 	// printf("inside path printing\n");
	// 	cout<<required_path.top()<<" ";
	// 	required_path.pop();
	// }
	// cout<<"\n";
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


