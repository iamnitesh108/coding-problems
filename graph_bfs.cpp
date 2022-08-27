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

// void bfs(vector<int> adj[], int root, int size)
// {
// 	vector<bool> visited(size,0);

// 	// for(int i = 0; i <= size; i++)
// 	// 	visited[i] == false;

// 	queue<int> q;
// 	q.push(root);
// 	visited[root] = true;

// 	while(!q.empty())
// 	{
// 		int u = q.front(); q.pop();

// 		cout<<u<<" ";
		
// 		for(int i : adj[u])
// 			if(!visited[i])
// 			{
// 				q.push(i);
// 				visited[i] = true;
// 			}
// 	}
// }


void bfs(vector<int> adj[], int src, int size)
{
	vector<bool> visited(size,0);

	// for(int i = 0; i <= size; i++)
	// 	visited[i] == false;

	queue<int> q;
	q.push(src);
	visited[src] = true;

	while(!q.empty())
	{
		int curr = q.front(); q.pop();

		cout<<curr<<" ";
		
		for(int i = 0; i < adj[curr].size(); i++)
			if(!visited[adj[curr][i]])
			{
				q.push(adj[curr][i]);
				visited[adj[curr][i]] = true;
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

	printfGraph(adj,v); cout<<endl;cout<<endl;
	bfs(adj,0,6); cout<<endl;

}