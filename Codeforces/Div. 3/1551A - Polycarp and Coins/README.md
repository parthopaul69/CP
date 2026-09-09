# A. Polycarp and Coins
 
| Field | Value |
|---|---|
| **Contest** | [1551](https://codeforces.com/contest/1551) |
| **Problem** | [1551A — Polycarp and Coins](https://codeforces.com/contest/1551/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Polycarp must pay **exactly** `n` burles at the checkout. He has coins of two nominal values: `1` burle and `2` burles. Polycarp likes both kinds of coins equally. So he doesn't want to pay with more coins of one type than with the other.

Thus, Polycarp wants to minimize the difference between the count of coins of `1` burle and `2` burles being used. Help him by determining two non-negative integer values `c₁` and `c₂` which are the number of coins of `1` burle and `2` burles, respectively, so that the total value of that number of coins is **exactly** `n` (i. e. `c₁ + 2 · c₂ = n`), and the absolute value of the difference between `c₁` and `c₂` is as little as possible (i. e. you must minimize `|c₁-c₂|`).

## Input

The first line contains one integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases. Then `t` test cases follow.

Each test case consists of one line. This line contains one integer `n` (`1 ≤ n ≤ 10⁹`) — the number of burles to be paid by Polycarp.

## Output

For each test case, output a separate line containing two integers `c₁` and `c₂` (`c₁, c₂ ≥ 0`) separated by a space where `c₁` is the number of coins of `1` burle and `c₂` is the number of coins of `2` burles. If there are multiple optimal solutions, print any one.

## Examples

**Example:**

```
6
1000
30
1
32
1000000000
5

```

**Output:**

```
334 333
10 10
1 0
10 11
333333334 333333333
1 2

```

## Note

The answer for the first test case is "`334 333`". The sum of the nominal values of all coins is `334 · 1 + 333 · 2 = 1000`, whereas `|334 - 333| = 1`. One can't get the better value because if `|c₁ - c₂| = 0`, then `c₁ = c₂` and `c₁ · 1 + c₁ · 2 = 1000`, but then the value of `c₁` isn't an integer.

The answer for the second test case is "`10 10`". The sum of the nominal values is `10 · 1 + 10 · 2 = 30` and `|10 - 10| = 0`, whereas there's no number having an absolute value less than `0`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1551/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
