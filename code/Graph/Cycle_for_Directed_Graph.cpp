#include<bits/stdc++.h>
using namespace std;
class Graph
{
	private:
	int V;
	list<int> *adj;
	bool isCyclicUtil(int v,bool visited[],bool *rs);
	public:
	Graph(int v);
	void addEdge(int u,int v);
	bool isCyclic();
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
bool Graph::isCyclicUtil(int v,bool visited[],bool *recStack)
{
	if(visited[v]==false)
	{
		visited[v]=true;
		recStack[v]=true;
	}
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i)
	{
		if(!visited[*i] && isCyclicUtil(*i,visited,recStack))
		return true;
		else if(recStack[*i])
		return true;
	}
	recStack[v]=false;
	return false;
}
bool Graph::isCyclic()
{
	bool *visited = new bool[V];
	bool *recStack = new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
		recStack[i]=false;
	}
	for(int i=0;i<V;i++)
	{
		if(isCyclicUtil(i,visited,recStack))
		return true;
	}
	return false;
}
int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	cout<<"Topological Sort is:"<<endl;
	//g.topologicalSort();
	if(g.isCyclic())
	{
		cout<<"Cycle has been find"<<endl;
	}
	else
	{
		cout<<"Cycle has been not found"<<endl;
	}
	return 0;
	
}
