#include <iostream>
#include <algorithm>
using namespace std;

#define V 4
#define E 5

struct Edge
{
    int src, dest, weight;
};

int parent[V];

int findParent(int i)
{
    if (parent[i] == i)
        return i;

    return parent[i] = findParent(parent[i]);
}

void unionSet(int u, int v)
{
    int parentU = findParent(u);
    int parentV = findParent(v);

    parent[parentU] = parentV;
}

bool compare(Edge a, Edge b)
{
    return a.weight < b.weight;
}

void kruskalMST(Edge edges[])
{
    sort(edges, edges + E, compare);

    for (int i = 0; i < V; i++)
        parent[i] = i;

    int totalWeight = 0;
    int edgeCount = 0;

    cout << "Edges in the Minimum Spanning Tree:\n";

    for (int i = 0; i < E && edgeCount < V - 1; i++)
    {
        int u = findParent(edges[i].src);
        int v = findParent(edges[i].dest);

        if (u != v)
        {
            cout << edges[i].src << " - "
                 << edges[i].dest << " : "
                 << edges[i].weight << endl;

            unionSet(u, v);

            totalWeight += edges[i].weight;
            edgeCount++;
        }
    }

    if (edgeCount != V - 1)
    {
        cout << "Graph is disconnected!" << endl;
        return;
    }

    cout << "Total weight of MST: "
         << totalWeight << endl;
}

int main()
{
    Edge edges[E] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(edges);

    return 0;
}
