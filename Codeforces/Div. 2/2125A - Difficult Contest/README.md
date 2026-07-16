# A. Difficult Contest
 
| Field | Value |
|---|---|
| **Contest** | [2125](https://codeforces.com/contest/2125) |
| **Problem** | [2125A — Difficult Contest](https://codeforces.com/contest/2125/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, implementation, sortings, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

It is known that a contest can be represented by a string `s`, consisting of uppercase Latin letters that denote problems. It is also known that a contest is difficult if it contains "`FFT`" or "`NTT`" as a contiguous substring.

Your task is to rearrange the problem in contest `s` in such a way that this contest is not difficult. If the initial contest is not difficult, you may leave it as it is.

## Input

Each test consists of several test cases. The first line contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of test cases. The description of the test cases follows.

The only line of each test case contains `s` (`1 ≤ |s| ≤ 2 · 10^5`).

Additional constraints on the input data:

 - the total length of strings across all test cases does not exceed `2 · 10^5`.

## Output

For each test case, output a string — a non-difficult contest that was obtained from `s` by rearranging the letters.

If there are multiple correct answers, you may output any. It can be shown that at least one correct answer always exists.

## Examples

**Example:**

```
5
FFT
ABFBANTTA
FFTNTT
FFTFFTFFTNNTNNT
AFFTBFFNTTFTTZ
```

**Output:**

```
FTF
ABFBANATT
NTFTFT
TFFFFFFNTNTNTNT
AFTFBTTFFNFTTZ

```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/2125/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
