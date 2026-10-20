# [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number)

> ![Medium](https://img.shields.io/badge/difficulty-Medium-f0ad4e?style=flat-square) ![NeetCode 150](https://img.shields.io/badge/Roadmap-NeetCode%20150-6366f1?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Medium |
| Topics | [Hash Table](../README.md#tag-hash-table), [String](../README.md#tag-string), [Backtracking](../README.md#tag-backtracking) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 28m 21s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-20T10:16:37.975Z |

---

## Problem

<p>Given a string containing digits from <code>2-9</code> inclusive, return all possible letter combinations that the number could represent. Return the answer in <strong>any order</strong>.</p>

<p>A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png" style="width: 300px; height: 243px;" />
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> digits = &quot;23&quot;
<strong>Output:</strong> [&quot;ad&quot;,&quot;ae&quot;,&quot;af&quot;,&quot;bd&quot;,&quot;be&quot;,&quot;bf&quot;,&quot;cd&quot;,&quot;ce&quot;,&quot;cf&quot;]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> digits = &quot;2&quot;
<strong>Output:</strong> [&quot;a&quot;,&quot;b&quot;,&quot;c&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= digits.length &lt;= 4</code></li>
	<li><code>digits[i]</code> is a digit in the range <code>[&#39;2&#39;, &#39;9&#39;]</code>.</li>
</ul>


---

## Solutions

### Backtracking

[`letter-combinations-of-a-phone-number-backtracking.cpp`](./letter-combinations-of-a-phone-number-backtracking.cpp)

- **Time**: `O(2^N)`
- **Space**: `O(N)`
