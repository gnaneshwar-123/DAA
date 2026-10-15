Practical 10: Kruskal's Algorithm in C++
Aim

To implement Kruskal's Algorithm to find the Minimum Spanning Tree (MST) of a connected, weighted, undirected graph.

Theory

Kruskal's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree of a graph. It sorts all edges in increasing order of weight and selects the smallest edges one by one, avoiding cycles, until the MST contains V - 1 edges.

Algorithm
Start with a weighted, undirected graph.
Sort all edges in increasing order of their weights.
Initialize each vertex as a separate set.
Select the edge with the smallest weight.
If the selected edge does not form a cycle, include it in the MST.
Merge the sets of the two vertices connected by the selected edge.
Repeat until the MST contains V - 1 edges or all edges have been considered.
Display the MST edges and their total weight.
Program

The C++ implementation is available in kruskal_algorithm.cpp.

Sample Output
Edges in the Minimum Spanning Tree:
2 - 3 : 4
0 - 3 : 5
0 - 1 : 10
Total weight of MST: 19

Complexity Analysis
Time Complexity: O(E log E)
Space Complexity: O(V), excluding edge storage.

Where:

V = Number of vertices
E = Number of edges
Result

Kruskal's Algorithm was successfully implemented in C++ to find the Minimum Spanning Tree of a weighted, undirected graph.
