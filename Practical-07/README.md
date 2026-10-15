# Practical 7: Making Change Problem Using Dynamic Programming

## Aim

To implement the **Making Change Problem** using the **Dynamic Programming** technique.

## Problem Statement

Given a set of coin denominations and a target amount, find the **minimum number of coins** required to make the given amount.

## Algorithm

1. Read the number of coin denominations.
2. Read the coin denominations.
3. Read the target amount.
4. Create a DP array `dp[]`.
5. Initialize `dp[0] = 0` and all other values to infinity.
6. For every amount from `1` to the target amount:

   * Check each available coin.
   * If the coin value is less than or equal to the current amount, update the minimum number of coins.
7. `dp[amount]` gives the minimum number of coins required.
8. Display the result.

## Example

Coin denominations:
`1 2 5 10`

Target amount:
`18`

Minimum combination:

`10 + 5 + 2 + 1 = 18`

Therefore, the minimum number of coins required is **4**.

## Time Complexity

**O(n × A)**

Where:

* `n` = number of coin denominations
* `A` = target amount

## Space Complexity

**O(A)**

## Language Used

C++

## Technique Used

Dynamic Programming
