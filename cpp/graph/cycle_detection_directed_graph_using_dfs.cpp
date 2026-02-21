#include <iostream>
#include <list>
#include <vector>
#include <queue>
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
    }

    bool isCycleDirDfs(int curr, vector<bool> &vis, vector<bool> &recpath)
    {
        vis[curr] = true;
        recpath[curr] = true;

        for (int v : l[curr])
        {
            if (!vis[v])
            {
                if (isCycleDirDfs(v, vis, recpath))
                {
                    return true;
                }
            }
            else if (recpath[v])
            {
                return true;
            }
        }

        recpath[curr] = false;
        return false;
    }

    bool isCycle()
    {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (isCycleDirDfs(i, vis, recPath))
                {
                    return true;
                }
            }
        }

        return false;
    }
};
int main()
{
    Graph g(4);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    cout << g.isCycle() << endl;
    return 0;
}