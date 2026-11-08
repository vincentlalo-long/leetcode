# [367. Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Math](../README.md#tag-math), [Binary Search](../README.md#tag-binary-search) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 6m 38s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-11-08T15:35:30.684Z |

---

## Problem

<p>Given a positive integer num, return <code>true</code> <em>if</em> <code>num</code> <em>is a perfect square or</em> <code>false</code> <em>otherwise</em>.</p>

<p>A <strong>perfect square</strong> is an integer that is the square of an integer. In other words, it is the product of some integer with itself.</p>

<p>You must not use any built-in library function, such as <code>sqrt</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 16
<strong>Output:</strong> true
<strong>Explanation:</strong> We return true because 4 * 4 = 16 and 4 is an integer.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 14
<strong>Output:</strong> false
<strong>Explanation:</strong> We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


---

## Solutions

### Binary Search

[`valid-perfect-square-binary-search.cpp`](./valid-perfect-square-binary-search.cpp)

- **Time**: `O(log N)`
- **Space**: `O(1)`
