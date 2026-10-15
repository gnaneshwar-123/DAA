Practical 09: Prim's Algorithm
Aim

To implement Prim's Algorithm to find the Minimum Spanning Tree (MST) of a connected, undirected, weighted graph.

Theory

Prim's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree of a connected, undirected, weighted graph. It starts from any vertex and repeatedly selects the minimum-weight edge that connects a vertex in the MST to a vertex outside it.

Algorithm
Start with an initial vertex.
Initialize all key values to infinity and mark all vertices as not included in the MST.
Set the key value of the starting vertex to 0.
Select the vertex with the minimum key value that is not yet included in the MST.
Update the key values of adjacent vertices if a smaller edge weight is found.
Repeat until all vertices are included in the MST.
Display the edges of the MST and calculate their total weight.
Time Complexity

O(V²), where V is the number of vertices.

Space Complexity

O(V), excluding graph storage.

Result

Prim's Algorithm was successfully implemented in C++ to find the Minimum Spanning Tree of the given graph.
