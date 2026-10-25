# [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self)

> ![Medium](https://img.shields.io/badge/difficulty-Medium-f0ad4e?style=flat-square) ![Blind 75](https://img.shields.io/badge/Roadmap-Blind%2075-007acc?style=flat-square) ![NeetCode 150](https://img.shields.io/badge/Roadmap-NeetCode%20150-6366f1?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Medium |
| Topics | [Array](../README.md#tag-array), [Prefix Sum](../README.md#tag-prefix-sum) |
| Language | C++ |
| Time Complexity | `O(N)` |
| Space Complexity | `O(N)` |
| Status | Accepted |
| Time Spent | 12m 07s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-25T11:31:14.976Z |

---

## Problem

<p>Given an integer array <code>nums</code>, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is equal to the product of all the elements of</em> <code>nums</code> <em>except</em> <code>nums[i]</code>.</p>

<p>The product of any prefix or suffix of <code>nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time and without using the division operation.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> [24,12,8,6]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [-1,1,0,-3,3]
<strong>Output:</strong> [0,0,9,0,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-30 &lt;= nums[i] &lt;= 30</code></li>
	<li>The input is generated such that <code>answer[i]</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong>&nbsp;Can you solve the problem in <code>O(1)</code>&nbsp;extra&nbsp;space complexity? (The output array <strong>does not</strong> count as extra space for space complexity analysis.)</p>


---

## Solution

[`product-of-array-except-self.cpp`](./product-of-array-except-self.cpp)

## Notes

> 💡 **Aha! Moment / Key Insight**:
> Extra space O(1)
