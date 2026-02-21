#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph
{
    int V;
    list<int> *l; // int* arr
public:
    Graph(int v)
    {
        this->V = v;
        l = new list<int>[V];
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void dfsHelper(int src, vector<bool>&vis){
        cout<< src << " ";
        vis[src] = true;
        for(int v: l[src]){
            if(!vis[v]){
                dfsHelper(v, vis);
            }
        }
    }

    void dfs(){
        int src = 0;
        vector<bool> vis(V, false);
        for (int i = 0; i < V;i++){
            if(!vis[i]){
                dfsHelper(i, vis); // only this logic is use for disconnected graph
            }
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.dfs();
    return 0;
}