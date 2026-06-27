# A. Little Elephant and Function
 
| Field | Value |
|---|---|
| **Contest** | [221](https://codeforces.com/contest/221) |
| **Problem** | [221A — Little Elephant and Function](https://codeforces.com/contest/221/problem/A) |
| **Rating** | 1000 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

The Little Elephant enjoys recursive functions.

This time he enjoys the sorting function. Let *a* is a permutation of an integers from 1 to *n*, inclusive, and *a*_(*i*) denotes the *i*-th element of the permutation. The Little Elephant's recursive function *f*(*x*), that sorts the first *x* permutation's elements, works as follows:

 - If *x* = 1, exit the function.
- Otherwise, call *f*(*x* - 1), and then make *swap*(*a*_(*x* - 1), *a*_(*x*)) (swap the *x*-th and (*x* - 1)-th elements of *a*).

The Little Elephant's teacher believes that this function does not work correctly. But that-be do not get an F, the Little Elephant wants to show the performance of its function. Help him, find a permutation of numbers from 1 to *n*, such that after performing the Little Elephant's function (that is call *f*(*n*)), the permutation will be sorted in ascending order.

## Input

A single line contains integer *n* (1 ≤ *n* ≤ 1000) — the size of permutation.

## Output

In a single line print *n* distinct integers from 1 to *n* — the required permutation. Numbers in a line should be separated by spaces.

It is guaranteed that the answer exists.

## Examples

**Example 1:**

```
1

```

**Output 1:**

```
1 
```

**Example 2:**

```
2

```

**Output 2:**

```
2 1 
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/221/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
