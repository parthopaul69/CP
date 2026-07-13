# A. Contest Proposal
 
| Field | Value |
|---|---|
| **Contest** | [1972](https://codeforces.com/contest/1972) |
| **Problem** | [1972A — Contest Proposal](https://codeforces.com/contest/1972/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, greedy, two pointers |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

A contest contains `n` problems and the difficulty of the `i`-th problem is expected to be **at most** `b_i`. There are already `n` problem proposals and the difficulty of the `i`-th problem is `a_i`. Initially, both `a_1, a_2, …, a_n` and `b_1, b_2, …, b_n` are sorted in non-decreasing order.

Some of the problems may be more difficult than expected, so the writers must propose more problems. When a new problem with difficulty `w` is proposed, the most difficult problem will be deleted from the contest, and the problems will be sorted in a way that the difficulties are non-decreasing.

In other words, in each operation, you choose an integer `w`, insert it into the array `a`, sort array `a` in non-decreasing order, and remove the last element from it.

Find the minimum number of new problems to make `a_i≤ b_i` for all `i`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1≤ t≤ 100`). The description of the test cases follows.

The first line of each test case contains only one positive integer `n` (`1 ≤ n ≤ 100`), representing the number of problems.

The second line of each test case contains an array `a` of length `n` (`1≤ a_1≤ a_2≤·s≤ a_n≤ 10^9`).

The third line of each test case contains an array `b` of length `n` (`1≤ b_1≤ b_2≤·s≤ b_n≤ 10^9`).

## Output

For each test case, print an integer as your answer in a new line.

## Examples

**Example:**

```
2
6
1000 1400 2000 2000 2200 2700
800 1200 1500 1800 2200 3000
6
4 5 6 7 8 9
1 2 3 4 5 6
```

**Output:**

```
2
3

```

## Note

In the first test case:

 - Propose a problem with difficulty `w=800` and `a` becomes `[800,1000,1400,2000,2000,2200]`.
- Propose a problem with difficulty `w=1800` and `a` becomes `[800,1000,1400,1800,2000,2000]`.

It can be proved that it's impossible to reach the goal by proposing fewer new problems.

In the second test case:

 - Propose a problem with difficulty `w=1` and `a` becomes `[1,4,5,6,7,8]`.
- Propose a problem with difficulty `w=2` and `a` becomes `[1,2,4,5,6,7]`.
- Propose a problem with difficulty `w=3` and `a` becomes `[1,2,3,4,5,6]`.

It can be proved that it's impossible to reach the goal by proposing fewer new problems.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/1972/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
