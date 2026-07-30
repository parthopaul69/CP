# B. Godsend
 
| Field | Value |
|---|---|
| **Contest** | [841](https://codeforces.com/contest/841) |
| **Problem** | [841B — Godsend](https://codeforces.com/contest/841/problem/B) |
| **Rating** | 1100 |
| **Tags** | games, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 218 ms |
| **Memory** | 4200 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Leha somehow found an array consisting of *n* integers. Looking at it, he came up with a task. Two players play the game on the array. Players move one by one. The first player can choose for his move a subsegment of non-zero length with an odd sum of numbers and remove it from the array, after that the remaining parts are glued together into one array and the game continues. The second player can choose a subsegment of non-zero length with an even sum and remove it. Loses the one who can not make a move. Who will win if both play optimally?

## Input

First line of input data contains single integer *n* (1 ≤ *n* ≤ 10^6) — length of the array.

Next line contains *n* integers *a*_1, *a*_2, ..., *a*_*n* (0 ≤ *a*_*i* ≤ 10^9).

## Output

Output answer in single line. "`First`", if first player wins, and "`Second`" otherwise (without quotes).

## Examples

**Example 1:**

```
4
1 3 2 3

```

**Output 1:**

```
First

```

**Example 2:**

```
2
2 2

```

**Output 2:**

```
Second

```

## Note

In first sample first player remove whole array in one move and win.

In second sample first player can't make a move and lose.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/841/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
