
// Practical - 12
// Aim: Implement Travelling Salesman Problem
// using Dynamic Programming.

#include <iostream>
#include <algorithm>
using namespace std;

#define V 4
#define INF 999999

int tsp(int graph[V][V], int mask, int pos,
        int dp[V][1 << V])
{
    // If all cities are visited, return to starting city
    if (mask == (1 << V) - 1)
    {
        return graph[pos][0];
    }

    if (dp[pos][mask] != -1)
    {
        return dp[pos][mask];
    }

    int ans = INF;

    // Visit unvisited cities
    for (int city = 0; city < V; city++)
    {
        if ((mask & (1 << city)) == 0)
        {
            int newAns = graph[pos][city] +
                tsp(graph, mask | (1 << city),
                    city, dp);

            ans = min(ans, newAns);
        }
    }

    return dp[pos][mask] = ans;
}

int main()
{
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int dp[V][1 << V];

    // Initialize DP table
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < (1 << V); j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << "Practical - 12";
    cout << "\nTravelling Salesman Problem\n";

    int result = tsp(graph, 1, 0, dp);

    cout << "\nMinimum Travelling Cost: "
         << result << endl;

    return 0;
}
