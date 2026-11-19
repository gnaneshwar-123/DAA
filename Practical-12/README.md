Practical - 12: Travelling Salesman Problem
Aim

To write a C++ program to solve the Travelling Salesman Problem using Dynamic Programming.

Description

The Travelling Salesman Problem (TSP) is a well-known optimization problem in which a salesman must visit every city exactly once and return to the starting city with minimum total travelling cost.

This program uses Dynamic Programming with Bitmasking to find the minimum travelling cost.

Language
C++
Algorithm
Start from the first city.
Mark the starting city as visited.
Find all unvisited cities.
Calculate the cost of travelling to each unvisited city.
Recursively find the minimum cost for the remaining cities.
After visiting all cities, return to the starting city.
Display the minimum travelling cost.
Sample Input
text
Cost Matrix:

0   10  15  20
10  0   35  25
15  35  0   30
20  25  30  0

Sample Output
text
Practical - 12
Travelling Salesman Problem

Minimum Travelling Cost: 80

Complexity Analysis
Time Complexity: O(V^2 * 2^V)
Space Complexity: O(V * 2^V)
Conclusion

Thus, the Travelling Salesman Problem was successfully implemented in C++ using Dynamic Programming with Bitmasking to find the minimum travelling cost.
