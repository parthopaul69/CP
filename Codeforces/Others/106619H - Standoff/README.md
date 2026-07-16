# H. Standoff
 
| Field | Value |
|---|---|
| **Contest** | [106619](https://codeforces.com/contest/106619) |
| **Problem** | [106619H — Standoff](https://codeforces.com/contest/106619/problem/H) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a string `s` consisting of lowercase English letters.

Find two non-empty substrings`^∗` `p` and `q` of `s` such that `p` is not a substring of `q`, and `q` is not a substring of `p`. Note that `p` and `q` do not have to be disjoint — they may correspond to overlapping positions in `s`. Over all such pairs `(p, q)`, output the maximum possible value of `|p| + |q|`, where `|x|` denotes the length of a string `x`.

If no such pair exists, output `0`.

`^∗`A string `a` is a substring of a string `b` if `a` can be obtained from `b` by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end. For example, `us` is a substring of `sust`, but `ut` and `aus` are not.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of test cases.

The first and only line of each test case contains a string `s` (`1 ≤ |s| ≤ 3 · 10^5`) consisting of lowercase English letters.

It is guaranteed that the sum of `|s|` over all test cases does not exceed `3 · 10^5`.

## Output

For each test case, output a single integer — the maximum value of `|p| + |q|` over all valid pairs, or `0` if no valid pair exists.

## Examples

**Example:**

```
2
ab
z
```

**Output:**

```
2
0
```

## Note

In the first test case, `s = ab`. Choose `p = a` and `q = b`; neither string is a substring of the other, and `|p| + |q| = 1 + 1 = 2`, which is the maximum possible.

In the second test case, `s = z` has only one substring, `z` itself, so the only possible choice is `p = q = z`. But then `p` is a substring of `q`, so this pair is not valid. No valid pair exists, and the answer is `0`.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106619/problem/H)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
