#include <iostream>
#include <list>
using namespace std;

class Graph
{
public:
    int V;
    list<int> *l;
    bool isUndir;
    Graph(int V, bool isUndir = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        if (isUndir)
        {
            l[v].push_back(u);
        }
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (auto &neigh : l[i])
            {
                cout << neigh << " , ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph graph(6);
    graph.addEdge(0, 2);
    graph.addEdge(0, 1);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.printGraph();
    return 0;
}