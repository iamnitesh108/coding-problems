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
bool isCyclic(vector<int> adj[], int s,
 			  vector<bool> &visited, int parent)
{
	visited[s] = true;

	for(int i = 0; i < adj[s].size(); i++)
	{
		if(!visited[adj[s][i]])
		{
			if(isCyclic(adj, adj[s][i], visited, s))
				return true;
		}
		else if(adj[s][i] != parent)
			return true;
	}
	return false;
}

bool DFS(vector<int> adj[], int v)
{
	vector<bool> visited(v, false);

	for(int i = 0; i < v; i++)
	{
		if(!visited[i])
		{
			if(isCyclic(adj, i, visited, -1))
				return true;
		}
	}
	return false;
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
	cout<<DFS(adj, v)<<endl;
	

}