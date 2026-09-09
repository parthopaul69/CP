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

You are given a string `s` of length `n` consisting of `0` and/or `1`. In one operation, you can select a non-empty subsequence `t` from `s` such that any two adjacent characters in `t` are different. Then, you flip each character of `t` (`0` becomes `1` and `1` becomes `0`). For example, if `s=00101` and `t=s₁s₃s₄s₅=0101`, after the operation, `s` becomes `10010`.

Calculate the minimum number of operations required to change all characters in `s` to `0`.

Recall that for a string `s = s₁s₂… sₙ`, any string `t=sᵢ_₁sᵢ_₂… sᵢ_ₖ` (`k≥ 1`) where `1≤ i₁ < i₂ < … < iₖ≤ n` is a subsequence of `s`.

## Input

The first line of input contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of input test cases.

The only line of each test case contains the string `s` (`1≤ |s|≤ 50`), where `|s|` represents the length of `s`.

## Output

For each test case, output the minimum number of operations required to change all characters in `s` to `0`.

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

In the first test case, you can flip `s₁`. Then `s` becomes `0`, so the answer is `1`.

In the fourth test case, you can perform the following three operations in order:

- Flip `s₁s₂s₃s₄s₅`. Then `s` becomes `01010`.
- Flip `s₂s₃s₄`. Then `s` becomes `00100`.
- Flip `s₃`. Then `s` becomes `00000`.

It can be shown that you can not change all characters in `s` to `0` in less than three operations, so the answer is `3`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2062/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
