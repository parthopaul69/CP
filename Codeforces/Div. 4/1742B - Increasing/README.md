# B. Increasing
 
| Field | Value |
|---|---|
| **Contest** | [1742](https://codeforces.com/contest/1742) |
| **Problem** | [1742B — Increasing](https://codeforces.com/contest/1742/problem/B) |
| **Rating** | 800 |
| **Tags** | greedy, implementation, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an array a of n positive integers. Determine if, by rearranging the elements, you can make the array strictly increasing. In other words, determine if it is possible to rearrange the elements such that a_1 < a_2 < … < a_n holds.

## Input

The first line contains a single integer t (1 ≤ t ≤ 100) — the number of test cases.

The first line of each test case contains a single integer n (1 ≤ n ≤ 100) — the length of the array.

The second line of each test case contains n integers a_i (1 ≤ a_i ≤ 10^9) — the elements of the array.

## Output

For each test case, output "`YES`" (without quotes) if the array satisfies the condition, and "`NO`" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "`yEs`", "`yes`", "`Yes`" and "`YES`" will be recognized as a positive answer).

## Examples

**Example:**

```
3
4
1 1 1 1
5
8 7 1 3 4
1
5
```

**Output:**

```
NO
YES
YES

```

## Note

In the first test case any rearrangement will keep the array [1,1,1,1], which is not strictly increasing.

In the second test case, you can make the array [1,3,4,7,8].

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1742/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
