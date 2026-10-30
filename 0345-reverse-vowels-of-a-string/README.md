# [345. Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square) ![LeetCode 75](https://img.shields.io/badge/Roadmap-LeetCode%2075-f89f1b?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Two Pointers](../README.md#tag-two-pointers), [String](../README.md#tag-string) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 12m 53s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-30T14:16:13.473Z |

---

## Problem

<p>Given a string <code>s</code>, reverse only all the vowels in the string and return it.</p>

<p>The vowels are <code>&#39;a&#39;</code>, <code>&#39;e&#39;</code>, <code>&#39;i&#39;</code>, <code>&#39;o&#39;</code>, and <code>&#39;u&#39;</code>, and they can appear in both lower and upper cases, more than once.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;IceCreAm&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;AceCreIm&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The vowels in <code>s</code> are <code>[&#39;I&#39;, &#39;e&#39;, &#39;e&#39;, &#39;A&#39;]</code>. On reversing the vowels, s becomes <code>&quot;AceCreIm&quot;</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;leetcode&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;leotcede&quot;</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 3 * 10<sup>5</sup></code></li>
	<li><code>s</code> consist of <strong>printable ASCII</strong> characters.</li>
</ul>


---

## Solutions

### Two Pointer

[`reverse-vowels-of-a-string-two-pointer.cpp`](./reverse-vowels-of-a-string-two-pointer.cpp)

- **Time**: `O(N)`
- **Space**: `O(1)`
