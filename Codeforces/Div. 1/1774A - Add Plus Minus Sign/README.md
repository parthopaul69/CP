# A. Add Plus Minus Sign
 
| Field | Value |
|---|---|
| **Contest** | [1774](https://codeforces.com/contest/1774) |
| **Problem** | [1774A — Add Plus Minus Sign](https://codeforces.com/contest/1774/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

AquaMoon has a string a consisting of only 0 and 1. She wants to add + and - between all pairs of consecutive positions to make the absolute value of the resulting expression as small as possible. Can you help her?

## Input

The first line contains a single integer t (1 ≤ t ≤ 2 000)  – the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer n (2 ≤ n ≤ 100) — the length of a.

The second line of each test case contains a string a of length n, consisting of only 0 and 1.

## Output

For each test case, output a string of length n - 1 consisting of - and + on a separate line. If there is more than one assignment of signs that produces the smallest possible absolute value, any of them is accepted.

## Examples

**Example:**

```
3
2
11
5
01101
5
10001
```

**Output:**

```
-
+-++
+++-

```

## Note

In the first test case, we can get the expression 1 - 1 = 0, with absolute value 0.

In the second test case, we can get the expression 0 + 1 - 1 + 0 + 1 = 1, with absolute value 1.

In the third test case, we can get the expression 1 + 0 + 0 + 0 - 1 = 0, with absolute value 0.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1774/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
