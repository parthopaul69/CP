# B. String Construction
 
| Field | Value |
|---|---|
| **Contest** | [2250](https://codeforces.com/contest/2250) |
| **Problem** | [2250B — String Construction](https://codeforces.com/contest/2250/problem/B) |
| **Rating** | 1000 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given two integers `n` and `k`.

Construct a binary string`∗` `s` of length `n`, such that both of the following conditions hold:

 - The absolute difference between the number of characters `0` and the number of characters `1` in `s` is at most `1`.
- There are exactly `k` pairs of adjacent equal characters in `s`. Formally, there are exactly `k` indices `i` (`1 ≤ i ≤ n-1`) satisfying `sᵢ = sᵢ ₊ ₁`.

Or determine that no such string exists.

`∗`A binary string is a string where each character is either `0` or `1`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 1000`). The description of the test cases follows.

The only line of each test case contains two integers `n` and `k` (`2 ≤ n ≤ 2 · 10⁵`, `0 ≤ k ≤ n-1`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output a binary string `s` of length `n` — the string you constructed. Print `-1` if such a string does not exist.

If there are multiple answers, you may output any of them.

## Examples

**Example:**

```
8
5 2
4 3
6 1
5 0
7 3
4 2
3 2
7 4
```

**Output:**

```
01110
-1
101001
01010
0100011
0011
-1
0111000
```

## Note

In the first test case, one possible answer is `s=01110`. It contains three characters `1` and two characters `0`, and there are exactly `2` adjacent equal pairs in `s`: `(s₂, s₃)` and `(s₃, s₄)`.

In the second test case, `k=n-1`. All characters in `s` should be equal, so the numbers of characters `0` and `1` could not differ by at most `1`. Thus, the answer is `-1`.

In the third test case, note that `010110` is also a possible answer.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2250/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
