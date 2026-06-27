# A. Penchick and Modern Monument
 
| Field | Value |
|---|---|
| **Contest** | [2031](https://codeforces.com/contest/2031) |
| **Problem** | [2031A — Penchick and Modern Monument](https://codeforces.com/contest/2031/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, dp, greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Amidst skyscrapers in the bustling metropolis of Metro Manila, the newest Noiph mall in the Philippines has just been completed! The construction manager, Penchick, ordered a state-of-the-art monument to be built with n pillars. 

The heights of the monument's pillars can be represented as an array h of n positive integers, where h_i represents the height of the i-th pillar for all i between 1 and n.

Penchick wants the heights of the pillars to be in **non-decreasing** order, i.e. h_i ≤ h_i + 1 for all i between 1 and n - 1. However, due to confusion, the monument was built such that the heights of the pillars are in **non-increasing** order instead, i.e. h_i ≥ h_i + 1 for all i between 1 and n - 1.

Luckily, Penchick can modify the monument and do the following operation on the pillars as many times as necessary:

 - Modify the height of a pillar to any positive integer. Formally, choose an index 1≤ i≤ n and a positive integer x. Then, assign h_i := x.

Help Penchick determine the minimum number of operations needed to make the heights of the monument's pillars **non-decreasing**.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 1000). The description of the test cases follows.

The first line of each test case contains a single integer n (1 ≤ n ≤ 50) — the number of pillars.

The second line of each test case contains n integers h_1, h_2, …, h_n (1 ≤ h_i ≤ n and h_i≥ h_i+1) — the height of the pillars.

**Please take note that the given array h is non-increasing.**

Note that there are **no** constraints on the sum of n over all test cases.

## Output

For each test case, output a single integer representing the minimum number of operations needed to make the heights of the pillars **non-decreasing**.

## Examples

**Example:**

```
3
5
5 4 3 2 1
3
2 2 1
1
1
```

**Output:**

```
4
1
0

```

## Note

In the first test case, the initial heights of pillars are h = [5, 4, 3, 2, 1].

 - In the first operation, Penchick changes the height of pillar 1 to h_1 := 2.
- In the second operation, he changes the height of pillar 2 to h_2 := 2.
- In the third operation, he changes the height of pillar 4 to h_4 := 4.
- In the fourth operation, he changes the height of pillar 5 to h_5 := 4.

After the operation, the heights of the pillars are h = [2, 2, 3, 4, 4], which is non-decreasing. It can be proven that it is not possible for Penchick to make the heights of the pillars non-decreasing in fewer than 4 operations. 

In the second test case, Penchick can make the heights of the pillars non-decreasing by modifying the height of pillar 3 to h_3 := 2. 

In the third test case, the heights of pillars are already non-decreasing, so no operations are required.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2031/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
