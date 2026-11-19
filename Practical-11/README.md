**Practical - 11: Floyd-Warshall Algorithm**
Aim

To implement the Floyd-Warshall Algorithm to find the shortest paths between all pairs of vertices in a weighted graph.

Description

The Floyd-Warshall Algorithm is a Dynamic Programming algorithm used to find the shortest distances between all pairs of vertices in a graph.

It works by considering each vertex as an intermediate vertex and updating the shortest distance whenever a shorter path is found.

Language
C++
Algorithm
Initialize the distance matrix using the adjacency matrix.
Consider each vertex as an intermediate vertex.
Check whether the distance from vertex i to vertex j can be reduced through vertex k.
Update the distance if a shorter path is found.
Repeat until all vertices have been considered.
Display the final shortest distance matrix.
Sample Output
text
Practical - 11
Floyd-Warshall Algorithm

Shortest Distance Matrix:
0       5       8       9
INF     0       3       4
INF     INF     0       1
INF     INF     INF     0

Complexity Analysis
Time Complexity: O(V^3)
Space Complexity: O(V^2)
Conclusion

Thus, the Floyd-Warshall Algorithm was successfully implemented in C++ to find the shortest paths between all pairs of vertices in a weighted graph.
