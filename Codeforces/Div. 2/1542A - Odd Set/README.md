# A. Odd Set
 
| Field | Value |
|---|---|
| **Contest** | [1542](https://codeforces.com/contest/1542) |
| **Problem** | [1542A — Odd Set](https://codeforces.com/contest/1542/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a multiset (i. e. a set that can contain multiple equal integers) containing `2n` integers. Determine if you can split it into exactly `n` pairs (i. e. each element should be in exactly one pair) so that the sum of the two elements in each pair is **odd** (i. e. when divided by `2`, the remainder is `1`).

## Input

The input consists of multiple test cases. The first line contains an integer `t` (`1≤ t≤ 100`) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer `n` (`1≤ n≤ 100`).

The second line of each test case contains `2n` integers `a_1,a_2,…, a_2n` (`0≤ a_i≤ 100`) — the numbers in the set.

## Output

For each test case, print "`Yes`" if it can be split into exactly `n` pairs so that the sum of the two elements in each pair is **odd**, and "`No`" otherwise. You can print each letter in any case.

## Examples

**Example:**

```
5
2
2 3 4 5
3
2 3 4 5 5 5
1
2 4
1
2 3
4
1 5 3 2 6 7 3 4

```

**Output:**

```
Yes
No
No
Yes
No

```

## Note

In the first test case, a possible way of splitting the set is `(2,3)`, `(4,5)`.

In the second, third and fifth test case, we can prove that there isn't any possible way.

In the fourth test case, a possible way of splitting the set is `(2,3)`.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/1542/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
