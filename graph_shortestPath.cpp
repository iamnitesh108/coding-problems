#include <iostream>
#include <vector>
#include <queue>
#include <climits>
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

void shortestPath(vector<int> adj[],int s, int v)
{
	vector<int> dist(v,0);
	
    
	vector<int> visited(v,0);
	queue<int> q;


	dist[s] = 0;
	q.push(s);
	visited[s] = true;

	while(!q.empty())
	{
		int u = q.front(); q.pop();

		for(int i = 0; i < adj[u].size(); i++)
		{
			if(!visited[adj[u][i]])
			{
				dist[adj[u][i]] = dist[u] + 1;
				q.push(adj[u][i]);
				visited[adj[u][i]] = true;
			}

		}

		// for(int x: adj[v])
		// {
		// 	if(!visited[x])
		// 	{
		// 		dist[x] = adj[u] + 1;
		// 		q.push(x);
		// 		visited[x] = true;
		// 	}
		// }
	}
	for( int i=0; i < dist.size(); i++)
		cout<< dist[i] <<" ";
	cout<<endl;
	for( int i: dist)
		cout<< i <<" ";
	cout<<endl;
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
	
	shortestPath(adj, 0, v);

	


}