# [3411. Maximum Subarray With Equal Products](https://leetcode.com/problems/maximum-subarray-with-equal-products)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Array](../README.md#tag-array), [Math](../README.md#tag-math), [Sliding Window](../README.md#tag-sliding-window), [Enumeration](../README.md#tag-enumeration), [Number Theory](../README.md#tag-number-theory) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 28m 08s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-11-24T04:32:06.376Z |

---

## Problem

<p>You are given an array of <strong>positive</strong> integers <code>nums</code>.</p>

<p>An array <code>arr</code> is called <strong>product equivalent</strong> if <code>prod(arr) == lcm(arr) * gcd(arr)</code>, where:</p>

<ul>
	<li><code>prod(arr)</code> is the product of all elements of <code>arr</code>.</li>
	<li><code>gcd(arr)</code> is the <span data-keyword="gcd-function">GCD</span> of all elements of <code>arr</code>.</li>
	<li><code>lcm(arr)</code> is the <span data-keyword="lcm-function">LCM</span> of all elements of <code>arr</code>.</li>
</ul>

<p>Return the length of the <strong>longest</strong> <strong>product equivalent</strong> <span data-keyword="subarray-nonempty">subarray</span> of <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,1,2,1,1,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong>&nbsp;</p>

<p>The longest product equivalent subarray is <code>[1, 2, 1, 1, 1]</code>, where&nbsp;<code>prod([1, 2, 1, 1, 1]) = 2</code>,&nbsp;<code>gcd([1, 2, 1, 1, 1]) = 1</code>, and&nbsp;<code>lcm([1, 2, 1, 1, 1]) = 2</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [2,3,4,5,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong>&nbsp;</p>

<p>The longest product equivalent subarray is <code>[3, 4, 5].</code></p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,1,4,5,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10</code></li>
</ul>


---

## Solutions

### Sliding Window

[`maximum-subarray-with-equal-products-sliding-window.cpp`](./maximum-subarray-with-equal-products-sliding-window.cpp)

- **Time**: `O(Nw)`
- **Space**: `O(N)`
