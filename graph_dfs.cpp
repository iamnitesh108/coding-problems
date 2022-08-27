#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printfGraph(vector<int> adj[], int v)
{
	for (int i = 0; i < v; ++i)		
	{
		for( int x: adj[i])
			cout << x <<" ";
		cout<<endl;
	}
}




void dfs(vector<int> adj[], int s, vector<bool> &visited)
{
	cout <<s<<" ";
	visited[s] = true;

	for(int i = 0; i <= adj[s][i]; i++)
	{
		if(visited[adj[s][i]] == false)
		{
			dfs(adj, adj[s][i], visited);
		}
	}
}
int main()
{
	int v = 6;

	vector<int> adj[v];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 0, 5);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 4);
	addEdge(adj, 3, 5);
	addEdge(adj, 4, 5);

	/*
					(1)----------(3)
				   /			    \
				  /				     \
				 (0)----------------(5)
				  \				     /
				   \                /
				    (2)----------(4)
	*/

	printfGraph(adj,v); cout<<endl;cout<<endl;
	vector<bool> visited(v, false);
	dfs(adj,0,visited); cout<<endl;

}