# A. String
 
| Field | Value |
|---|---|
| **Contest** | [2062](https://codeforces.com/contest/2062) |
| **Problem** | [2062A — String](https://codeforces.com/contest/2062/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, greedy, math, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 512 megabytes |

---

You are given a string `s` of length `n` consisting of `mathtt0` and/or `mathtt1`. In one operation, you can select a non-empty subsequence `t` from `s` such that any two adjacent characters in `t` are different. Then, you flip each character of `t` (`mathtt0` becomes `mathtt1` and `mathtt1` becomes `mathtt0`). For example, if `s=mathtt00101` and `t=s_1s_3s_4s_5=mathtt0101`, after the operation, `s` becomes `mathtt10010`.

Calculate the minimum number of operations required to change all characters in `s` to `mathtt0`.

Recall that for a string `s = s_1s_2… s_n`, any string `t=s_i_1s_i_2… s_i_k` (`k≥ 1`) where `1≤ i_1 < i_2 < … < i_k≤ n` is a subsequence of `s`.

## Input

The first line of input contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of input test cases.

The only line of each test case contains the string `s` (`1≤ |s|≤ 50`), where `|s|` represents the length of `s`.

## Output

For each test case, output the minimum number of operations required to change all characters in `s` to `mathtt0`.

## Examples

**Example:**

```
5
1
000
1001
10101
01100101011101
```

**Output:**

```
1
0
2
3
8

```

## Note

In the first test case, you can flip `s_1`. Then `s` becomes `mathtt0`, so the answer is `1`.

In the fourth test case, you can perform the following three operations in order:

- Flip `s_1s_2s_3s_4s_5`. Then `s` becomes `mathtt01010`.
- Flip `s_2s_3s_4`. Then `s` becomes `mathtt00100`.
- Flip `s_3`. Then `s` becomes `mathtt00000`.

It can be shown that you can not change all characters in `s` to `mathtt0` in less than three operations, so the answer is `3`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2062/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
