# A. You Delete, I Delete
 
| Field | Value |
|---|---|
| **Contest** | [2248](https://codeforces.com/contest/2248) |
| **Problem** | [2248A — You Delete, I Delete](https://codeforces.com/contest/2248/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Alice and Bob are given a binary string`^∗` `s` of length `n`. It contains at least one `mathtt0` and at least one `mathtt1`.

They each perform exactly **one** operation in the following order:

 - First, Alice chooses an occurrence of `mathtt0` in `s` and deletes it.
- Then, Bob chooses an occurrence of `mathtt1` in the resulting string and deletes it.

Alice wants the final string to be lexicographically`^†` as large as possible, while Bob wants it to be lexicographically as small as possible. Determine the final string if both players act optimally.

`^∗`A binary string is a string consisting only of the characters `mathtt0` and `mathtt1`.

`^†`For two distinct binary strings `a` and `b` of the same length, `a` is lexicographically smaller than `b` if, at the first position where they differ, `a` has the smaller digit.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). The description of the test cases follows.

The only line of each test case contains a binary string `s` of length `n` (`3 ≤ n ≤ 100`).

It is guaranteed that `s` contains at least one `mathtt0` and at least one `mathtt1`.

## Output

For each test case, output the final string if both players act optimally.

## Examples

**Example:**

```
4
101
11001
0010
0101010000010100100101
```

**Output:**

```
1
101
00
01010000010100100101
```

## Note

In the first test case, Alice must delete the only `mathtt0`. Bob may delete either occurrence of `mathtt1`, so the resulting string is `mathtt1`.

In the second test case, Alice may delete either occurrence of `mathtt0`. Bob optimally deletes one of the first two occurrences of `mathtt1`, so the resulting string is `mathtt101`.

In the third test case, Alice may delete any occurrence of `mathtt0`. Bob then deletes the only occurrence of `mathtt1`, so the resulting string is `mathtt00`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2248/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
