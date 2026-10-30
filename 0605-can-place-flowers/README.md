# [605. Can Place Flowers](https://leetcode.com/problems/can-place-flowers)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square) ![LeetCode 75](https://img.shields.io/badge/Roadmap-LeetCode%2075-f89f1b?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Array](../README.md#tag-array), [Greedy](../README.md#tag-greedy) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 30m 15s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-30T14:02:55.727Z |

---

## Problem

<p>You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in <strong>adjacent</strong> plots.</p>

<p>Given an integer array <code>flowerbed</code> containing <code>0</code>&#39;s and <code>1</code>&#39;s, where <code>0</code> means empty and <code>1</code> means not empty, and an integer <code>n</code>, return <code>true</code>&nbsp;<em>if</em> <code>n</code> <em>new flowers can be planted in the</em> <code>flowerbed</code> <em>without violating the no-adjacent-flowers rule and</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> flowerbed = [1,0,0,0,1], n = 1
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> flowerbed = [1,0,0,0,1], n = 2
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= flowerbed.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>flowerbed[i]</code> is <code>0</code> or <code>1</code>.</li>
	<li>There are no two adjacent flowers in <code>flowerbed</code>.</li>
	<li><code>0 &lt;= n &lt;= flowerbed.length</code></li>
</ul>


---

## Solutions

### Greedy

[`can-place-flowers-greedy.cpp`](./can-place-flowers-greedy.cpp)

- **Time**: `O(N)`
- **Space**: `O(1)`
