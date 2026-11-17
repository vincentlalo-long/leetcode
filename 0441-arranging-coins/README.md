# [441. Arranging Coins](https://leetcode.com/problems/arranging-coins)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Math](../README.md#tag-math), [Binary Search](../README.md#tag-binary-search) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 15m 01s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-11-17T14:17:44.394Z |

---

## Problem

<p>You have <code>n</code> coins and you want to build a staircase with these coins. The staircase consists of <code>k</code> rows where the <code>i<sup>th</sup></code> row has exactly <code>i</code> coins. The last row of the staircase <strong>may be</strong> incomplete.</p>

<p>Given the integer <code>n</code>, return <em>the number of <strong>complete rows</strong> of the staircase you will build</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/09/arrangecoins1-grid.jpg" style="width: 253px; height: 253px;" />
<pre>
<strong>Input:</strong> n = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> Because the 3<sup>rd</sup> row is incomplete, we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/09/arrangecoins2-grid.jpg" style="width: 333px; height: 333px;" />
<pre>
<strong>Input:</strong> n = 8
<strong>Output:</strong> 3
<strong>Explanation:</strong> Because the 4<sup>th</sup> row is incomplete, we return 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


---

## Solutions

### Binary Search

[`arranging-coins-binary-search.cpp`](./arranging-coins-binary-search.cpp)

- **Time**: `O(log N)`
- **Space**: `O(1)`
