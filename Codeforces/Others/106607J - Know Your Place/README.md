# J. Know Your Place
 
| Field | Value |
|---|---|
| **Contest** | [106607](https://codeforces.com/contest/106607) |
| **Problem** | [106607J — Know Your Place](https://codeforces.com/contest/106607/problem/J) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 78 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an array `a` of `n` positive integers.

You may perform the following operation any number of times:

 - Choose an index `i` (`1 ≤ i ≤ |a|`) such that `a_i ≤ i`, where `|a|` denotes the current length of the array, and delete the element `a_i` from the array; after the deletion, all elements to the right of position `i` shift one position to the left.

Determine whether it is possible to delete all elements of the array using these operations.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of test cases.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 3 · 10^5`) — the length of the array.

The second line of each test case contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 10^9`) — the elements of the array.

It is guaranteed that the sum of `n` over all test cases does not exceed `3 · 10^5`.

## Output

For each test case, print `YES` if it is possible to delete all elements of the array, and `NO` otherwise.

## Examples

**Example:**

```
2
3
1 2 1
4
7 1 2 4
```

**Output:**

```
YES
NO
```

## Note

In the first test case, 

 - Select `i = 2` as `a_2 ≤ 2`, delete `a_2`, the array becomes `[1, 1]`;
- Select `i = 2` as `a_2 ≤ 2`, delete `a_2`, the array becomes `[1]`;
- Select `i = 1` as `a_1 ≤ 1`, delete `a_1`, the array becomes empty.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106607/problem/J)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
