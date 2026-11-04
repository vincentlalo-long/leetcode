# [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water)

> ![Medium](https://img.shields.io/badge/difficulty-Medium-f0ad4e?style=flat-square) ![LeetCode 75](https://img.shields.io/badge/Roadmap-LeetCode%2075-f89f1b?style=flat-square) ![Top Interview 150](https://img.shields.io/badge/Roadmap-Top%20Interview%20150-ef4743?style=flat-square) ![Top 100 Liked](https://img.shields.io/badge/Roadmap-Top%20100%20Liked-1a7f37?style=flat-square) ![Blind 75](https://img.shields.io/badge/Roadmap-Blind%2075-007acc?style=flat-square) ![NeetCode 150](https://img.shields.io/badge/Roadmap-NeetCode%20150-6366f1?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Medium |
| Topics | [Array](../README.md#tag-array), [Two Pointers](../README.md#tag-two-pointers), [Greedy](../README.md#tag-greedy) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 8m 22s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-11-04T14:06:14.326Z |

---

## Problem

<p>You are given an integer array <code>height</code> of length <code>n</code>. There are <code>n</code> vertical lines drawn such that the two endpoints of the <code>i<sup>th</sup></code> line are <code>(i, 0)</code> and <code>(i, height[i])</code>.</p>

<p>Find two lines that together with the x-axis form a container, such that the container contains the most water.</p>

<p>Return <em>the maximum amount of water a container can store</em>.</p>

<p><strong>Notice</strong> that you may not slant the container.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" style="width: 600px; height: 287px;" />
<pre>
<strong>Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>Output:</strong> 49
<strong>Explanation:</strong> The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> height = [1,1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == height.length</code></li>
	<li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= height[i] &lt;= 10<sup>4</sup></code></li>
</ul>


---

## Solutions

### Two Pointer

[`container-with-most-water-two-pointer.cpp`](./container-with-most-water-two-pointer.cpp)

- **Time**: `O(N)`
- **Space**: `O(1)`
