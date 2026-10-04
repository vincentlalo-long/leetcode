# [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square) ![Blind 75](https://img.shields.io/badge/Roadmap-Blind%2075-007acc?style=flat-square) ![NeetCode 150](https://img.shields.io/badge/Roadmap-NeetCode%20150-6366f1?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Math](../README.md#tag-math), [Dynamic Programming](../README.md#tag-dynamic-programming), [Memoization](../README.md#tag-memoization) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 57s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-04T16:20:51.766Z |

---

## Problem

<p>You are climbing a staircase. It takes <code>n</code> steps to reach the top.</p>

<p>Each time you can either climb <code>1</code> or <code>2</code> steps. In how many distinct ways can you climb to the top?</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 45</code></li>
</ul>


---

## Solutions

### Dynamic Programming

[`climbing-stairs-dynamic-programming.cpp`](./climbing-stairs-dynamic-programming.cpp)

- **Time**: `O(N)`
- **Space**: `O(1)`

> 💡 Đếm truy hồi
