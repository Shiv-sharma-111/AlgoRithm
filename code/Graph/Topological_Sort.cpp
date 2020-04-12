#include<bits/stdc++.h>
using namespace std;
class Graph
{
	private:
	int V;
	void topologicalSortUtil(int v,bool visited[],stack<int> &stack);
	list<int> *adj;
	public:
	Graph(int v);
	void addEdge(int u,int v);
	void topologicalSort();
};
Graph::Graph(int v)
{
	this->V=v;
	adj = new list<int>[v];
}
void Graph::addEdge(int u,int v)
{
	adj[u].push_back(v);
	//adj[v].push_back(u);
}
void Graph::topologicalSortUtil(int v,bool visited[],stack<int> &stack)
{
	visited[v]=true;
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i)
	{
		if(!visited[*i])
		{
			topologicalSortUtil(*i,visited,stack);
		}
		
	}
	stack.push(v);
}
void Graph::topologicalSort()
{
	stack<int> stack;
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			topologicalSortUtil(i,visited,stack);
		}
	}
	while(stack.empty()==false)
	{
		cout<<stack.top()<<" ";
		stack.pop();
	}
}
int main()
{
	Graph g(6);
	g.addEdge(5,2);
	g.addEdge(5,0);
	g.addEdge(4,0);
	g.addEdge(4,1);
	g.addEdge(2,3);
	g.addEdge(3,1);
	cout<<"Topological Sort is:"<<endl;
	g.topologicalSort();
	return 0;
	
}
