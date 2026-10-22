# [1025. Divisor Game](https://leetcode.com/problems/divisor-game)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | [Math](../README.md#tag-math), [Dynamic Programming](../README.md#tag-dynamic-programming), [Brainteaser](../README.md#tag-brainteaser), [Game Theory](../README.md#tag-game-theory), [Impartial Game](../README.md#tag-impartial-game) |
| Language | C++ |
| Status | Accepted |
| Time Spent | 15m 50s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-22T04:59:32.406Z |

---

## Problem

<p>Alice and Bob take turns playing a game, with Alice starting first.</p>

<p>Initially, there is a number <code>n</code> on the chalkboard. On each player&#39;s turn, that player makes a move consisting of:</p>

<ul>
	<li>Choosing any integer <code>x</code> with <code>0 &lt; x &lt; n</code> and <code>n % x == 0</code>.</li>
	<li>Replacing the number <code>n</code> on the chalkboard with <code>n - x</code>.</li>
</ul>

<p>Also, if a player cannot make a move, they lose the game.</p>

<p>Return <code>true</code> <em>if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> true
<strong>Explanation:</strong> Alice chooses 1, and Bob has no more moves.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> false
<strong>Explanation:</strong> Alice chooses 1, Bob chooses 1, and Alice has no more moves.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>


---

## Solutions

### Game Theory , Math

[`divisor-game-game-theory-math.cpp`](./divisor-game-game-theory-math.cpp)

- **Time**: `O(1)`
- **Space**: `O(1)`

> 💡 tricky
