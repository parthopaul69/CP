# B. Not Quite Latin Square
 
| Field | Value |
|---|---|
| **Contest** | [1915](https://codeforces.com/contest/1915) |
| **Problem** | [1915B — Not Quite Latin Square](https://codeforces.com/contest/1915/problem/B) |
| **Rating** | 800 |
| **Tags** | bitmasks, brute force, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

A *Latin square* is a `3 × 3` grid made up of the letters `A`, `B`, and `C` such that: 

 - in each row, the letters `A`, `B`, and `C` each appear once, and
- in each column, the letters `A`, `B`, and `C` each appear once.

 For example, one possible Latin square is shown below. `beginbmatrix A & B & C C & A & B B & C & A endbmatrix`You are given a Latin square, but one of the letters was replaced with a question mark `?`. Find the letter that was replaced.

## Input

The first line of the input contains a single integer `t` (`1 ≤ t ≤ 108`) — the number of testcases.

Each test case contains three lines, each consisting of three characters, representing the Latin square. Each character is one of `A`, `B`, `C`, or `?`.

Each test case is a Latin square with exactly one of the letters replaced with a question mark `?`.

## Output

For each test case, output the letter that was replaced.

## Examples

**Example:**

```
3
ABC
C?B
BCA
BCA
CA?
ABC
?AB
BCA
ABC
```

**Output:**

```
A
B
C

```

## Note

The correct Latin squares for the three test cases are shown below:

`beginbmatrix A & B & C C & colorredA & B B & C & A endbmatrix beginbmatrix B & C & A C & A & colorredB A & B & C endbmatrix beginbmatrix colorredC & A & B B & C & A A & B & C endbmatrix`

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1915/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
