# [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square) ![Top Interview 150](https://img.shields.io/badge/Roadmap-Top%20Interview%20150-ef4743?style=flat-square) ![Top 100 Liked](https://img.shields.io/badge/Roadmap-Top%20100%20Liked-1a7f37?style=flat-square) ![Blind 75](https://img.shields.io/badge/Roadmap-Blind%2075-007acc?style=flat-square) ![NeetCode 150](https://img.shields.io/badge/Roadmap-NeetCode%20150-6366f1?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Array](../README.md#tag-array), [Dynamic Programming](../README.md#tag-dynamic-programming) |
| Language | C++ |
| Time Complexity | `O(N)` |
| Space Complexity | `O(1)` |
| Status | Accepted |
| Time Spent | 18m 30s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-11-11T14:39:14.758Z |

---

## Problem

<p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>You want to maximize your profit by choosing a <strong>single day</strong> to buy one stock and choosing a <strong>different day in the future</strong> to sell that stock.</p>

<p>Return <em>the maximum profit you can achieve from this transaction</em>. If you cannot achieve any profit, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> prices = [7,1,5,3,6,4]
<strong>Output:</strong> 5
<strong>Explanation:</strong> Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> prices = [7,6,4,3,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> In this case, no transactions are done and the max profit = 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= prices.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= prices[i] &lt;= 10<sup>4</sup></code></li>
</ul>


---

## Solution

[`best-time-to-buy-and-sell-stock.cpp`](./best-time-to-buy-and-sell-stock.cpp)

## Notes

_Add your notes here._
