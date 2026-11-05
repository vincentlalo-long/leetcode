# [704. Binary Search](https://leetcode.com/problems/binary-search)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square) ![NeetCode 150](https://img.shields.io/badge/Roadmap-NeetCode%20150-6366f1?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Array](../README.md#tag-array), [Binary Search](../README.md#tag-binary-search) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 9m 36s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-11-05T13:52:13.799Z |

---

## Problem

<p>Given an array of integers <code>nums</code> which is sorted in ascending order, and an integer <code>target</code>, write a function to search <code>target</code> in <code>nums</code>. If <code>target</code> exists, then return its index. Otherwise, return <code>-1</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 9
<strong>Output:</strong> 4
<strong>Explanation:</strong> 9 exists in nums and its index is 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> 2 does not exist in nums so return -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt; nums[i], target &lt; 10<sup>4</sup></code></li>
	<li>All the integers in <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>nums</code> is sorted in ascending order.</li>
</ul>


---

## Solutions

### Binary Search

[`binary-search-binary-search.cpp`](./binary-search-binary-search.cpp)

- **Time**: `O(log N)`
- **Space**: `O(1)`
