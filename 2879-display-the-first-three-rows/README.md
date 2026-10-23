# [2879. Display the First Three Rows](https://leetcode.com/problems/display-the-first-three-rows)

> ![Easy](https://img.shields.io/badge/difficulty-Easy-2ea44f?style=flat-square)

| Property | Value |
|---|---|
| Difficulty | Easy |
| Topics | - |
| Language | Python3 |
| Status | Accepted |
| Time Spent | 1m 10s |
| Attempts | 1st try (Clean AC) |
| Synced | 2026-10-23T14:12:23.769Z |

---

## Problem

<pre>
DataFrame: <code>employees</code>
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| employee_id | int    |
| name        | object |
| department  | object |
| salary      | int    |
+-------------+--------+
</pre>

<p>Write a solution to display the <strong>first <code>3</code> </strong>rows<strong> </strong>of this DataFrame.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:
</strong>DataFrame employees
+-------------+-----------+-----------------------+--------+
| employee_id | name      | department            | salary |
+-------------+-----------+-----------------------+--------+
| 3           | Bob       | Operations            | 48675  |
| 90          | Alice     | Sales                 | 11096  |
| 9           | Tatiana   | Engineering           | 33805  |
| 60          | Annabelle | InformationTechnology | 37678  |
| 49          | Jonathan  | HumanResources        | 23793  |
| 43          | Khaled    | Administration        | 40454  |
+-------------+-----------+-----------------------+--------+
<strong>Output:</strong>
+-------------+---------+-------------+--------+
| employee_id | name    | department  | salary |
+-------------+---------+-------------+--------+
| 3           | Bob     | Operations  | 48675  |
| 90          | Alice   | Sales       | 11096  |
| 9           | Tatiana | Engineering | 33805  |
+-------------+---------+-------------+--------+
<strong>Explanation:</strong> 
Only the first 3 rows are displayed.</pre>


---

## Solution

[`display-the-first-three-rows.py`](./display-the-first-three-rows.py)

## Notes

> 💡 **Aha! Moment / Key Insight**:
> test another type
