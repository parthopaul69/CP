# B. 3-palindrome
 
| Field | Value |
|---|---|
| **Contest** | [805](https://codeforces.com/contest/805) |
| **Problem** | [805B — 3-palindrome](https://codeforces.com/contest/805/problem/B) |
| **Rating** | 1000 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In the beginning of the new year Keivan decided to reverse his name. He doesn't like palindromes, so he changed Naviek to Navick.

He is too selfish, so for a given *n* he wants to obtain a string of *n* characters, each of which is either '`a`', '`b`' or '`c`', with no *palindromes* of length 3 appearing in the string as a substring. For example, the strings "`abc`" and "`abca`" suit him, while the string "`aba`" doesn't. He also want the number of letters '`c`' in his string to be as little as possible.

## Input

The first line contains single integer *n* (1 ≤ *n* ≤ 2·10^(5)) — the length of the string.

## Output

Print the string that satisfies all the constraints.

If there are multiple answers, print any of them.

## Examples

**Example 1:**

```
2

```

**Output 1:**

```
aa

```

**Example 2:**

```
3

```

**Output 2:**

```
bba

```

## Note

A *palindrome* is a sequence of characters which reads the same backward and forward.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/805/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
