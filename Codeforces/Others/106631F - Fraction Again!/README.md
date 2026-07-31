# F. Fraction Again!
 
| Field | Value |
|---|---|
| **Contest** | [106631](https://codeforces.com/contest/106631) |
| **Problem** | [106631F — Fraction Again!](https://codeforces.com/contest/106631/problem/F) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a positive integer `k`. Find any three positive integers `x`, `y`, and `z` such that

`1/x + 1/y + 1/z = k,`

or report that no such triple exists.

## Input

The first line of the input contains a single integer `t` (`1 ≤ t ≤ 100`) — the number of test cases.

The first and only line of each test case contains a single integer `k` (`1 ≤ k ≤ 100`) — the target value of the sum.

## Output

For each test case, if a valid triple exists, output three space-separated positive integers `x`, `y`, and `z` on a single line. If there are multiple valid triples, you may output any of them.

If no valid triple exists, output `-1` instead.

## Examples

**Example:**

```
2
1
17
```

**Output:**

```
2 3 6
-1
```

## Note

In the first test case, `k = 1`, and `(x, y, z) = (2, 3, 6)` works because `1/2 + 1/3 + 1/6 = 1`. Other triples are valid too, for example `(6, 2, 3)` and `(3, 3, 3)`.

In the second test case, `k = 17`, and it can be shown that no triple of positive integers satisfies the equation, so the answer is `-1`.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106631/problem/F)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
