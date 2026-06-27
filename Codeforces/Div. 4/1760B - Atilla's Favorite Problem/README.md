# B. Atilla's Favorite Problem
 
| Field | Value |
|---|---|
| **Contest** | [1760](https://codeforces.com/contest/1760) |
| **Problem** | [1760B — Atilla's Favorite Problem](https://codeforces.com/contest/1760/problem/B) |
| **Rating** | 800 |
| **Tags** | greedy, implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In order to write a string, Atilla needs to first learn all letters that are contained in the string.

Atilla needs to write a message which can be represented as a string s. He asks you what is the minimum alphabet size required so that one can write this message.

The alphabet of size x (1 ≤ x ≤ 26) contains **only the first** x Latin letters. For example an alphabet of size 4 contains **only** the characters a, b, c and d.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

The first line of each test case contains a single integer n (1 ≤ n ≤ 100) — the length of the string.

The second line of each test case contains a string s of length n, consisting of lowercase Latin letters.

## Output

For each test case, output a single integer — the minimum alphabet size required to so that Atilla can write his message s.

## Examples

**Example:**

```
5
1
a
4
down
10
codeforces
3
bcf
5
zzzzz
```

**Output:**

```
1
23
19
6
26

```

## Note

For the first test case, Atilla needs to know only the character a, so the alphabet of size 1 which only contains a is enough.

For the second test case, Atilla needs to know the characters d, o, w, n. The smallest alphabet size that contains all of them is 23 (such alphabet can be represented as the string abcdefghijklmnopqrstuvw).

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1760/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
