# A. String Removal
 
| Field | Value |
|---|---|
| **Contest** | [104289](https://codeforces.com/contest/104289) |
| **Problem** | [104289A — String Removal](https://codeforces.com/contest/104289/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given a string `s` consisting of characters '`a`' and/or '`b`'.

In one move you can remove any two adjacent characters from the string if those two characters are different. 

Can you make the whole string empty by applying the move as many times as you want(possibly zero)?

## Input

The first line contains one integer `t` (`1≤ t≤ 10^5`) — the number of test cases.

Each test case consists of one line containing the string `s` (`1≤ |s|≤ 2 · 10^5`), consisting of characters '`a`' and/or '`b`'.

The total length of strings `s` in all test cases does not exceed `2 · 10^5`.

## Output

For each test case print "`YES`" (without quotes) if you can make the string empty, or "`NO`" (without quotes) otherwise.

You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES will all be recognized as correct answer).

## Examples

**Example:**

```
4
ba
abaabb
a
bbbbb
```

**Output:**

```
YES
YES
NO
NO

```

## Note

In the first test case, you can erase the whole string in a single move as the two characters are different.

In the second test case, you can apply the following moves (the underlined characters are being removed in each operation):

"`abaabb`" `arrow` "`abaabb`" `arrow` "`abab`" `arrow` "`abab`" `arrow` "`ab`" `arrow` "`ab`"`arrow` "``"

In the third test case, you can't make a move because there is only a single character.

In the fourth test case, there is only character `b` in the whole string. As no two adjacent characters are different you can't make any move, and thus the answer is "`NO`"

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/104289/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
