# A. Bear and Game
 
| Field | Value |
|---|---|
| **Contest** | [673](https://codeforces.com/contest/673) |
| **Problem** | [673A — Bear and Game](https://codeforces.com/contest/673/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Bear Limak likes watching sports on TV. He is going to watch a game today. The game lasts 90 minutes and there are no breaks.

Each minute can be either interesting or boring. If 15 consecutive minutes are boring then Limak immediately turns TV off.

You know that there will be *n* interesting minutes *t*_1, *t*_2, ..., *t*_*n*. Your task is to calculate for how many minutes Limak will watch the game.

## Input

The first line of the input contains one integer *n* (1 ≤ *n* ≤ 90) — the number of interesting minutes.

The second line contains *n* integers *t*_1, *t*_2, ..., *t*_*n* (1 ≤ *t*_1 < *t*_2 < ... *t*_*n* ≤ 90), given in the increasing order.

## Output

Print the number of minutes Limak will watch the game.

## Examples

**Example 1:**

```
3
7 20 88

```

**Output 1:**

```
35

```

**Example 2:**

```
9
16 20 30 40 50 60 70 80 90

```

**Output 2:**

```
15

```

**Example 3:**

```
9
15 20 30 40 50 60 70 80 90

```

**Output 3:**

```
90

```

## Note

In the first sample, minutes 21, 22, ..., 35 are all boring and thus Limak will turn TV off immediately after the 35-th minute. So, he would watch the game for 35 minutes.

In the second sample, the first 15 minutes are boring.

In the third sample, there are no consecutive 15 boring minutes. So, Limak will watch the whole game.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/673/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
