# A. Monocarp's Contest
 
| Field | Value |
|---|---|
| **Contest** | [2260](https://codeforces.com/contest/2260) |
| **Problem** | [2260A — Monocarp's Contest](https://codeforces.com/contest/2260/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

Monocarp is preparing a team programming contest. The contest has `n` problems, each of which is either easy or hard. The problems are numbered from `1` to `n`.

Monocarp wants the first and the last problems of the contest to be easy. In one operation, he can choose any two problems and swap them.

Determine the minimum number of operations required to make the first and the last problems easy, or report that it is impossible.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 10³`) — the number of test cases.

Each test case consists of two lines

 - the first line contains one integer `n` (`2 ≤ n ≤ 50`) — the number of problems in the contest;
- the second line contains `n` integers `a₁, a₂, …, aₙ` (`0 ≤ aᵢ ≤ 1`). If `aᵢ=0`, then the problem with number `i` is easy; if `aᵢ=1`, then it is hard.

## Output

For each test case, print the minimum number of operations required to make the first and the last problems easy. If it is impossible to satisfy the requirement, print `-1`.

## Examples

**Example:**

```
4
2
0 0
2
0 1
6
1 0 0 1 0 0
5
1 0 0 1 1
```

**Output:**

```
0
-1
1
2
```

## Note

In the first test case, the first and the last problems are already easy, so no operations are needed.

In the second test case, there is only one easy problem, so it is impossible to make both the first and the last problems easy.

In the third test case, one can swap the first and the second problems.

In the fourth test case, one can first swap the first and the second problems, and then — the third and the fifth problems.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2260/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
