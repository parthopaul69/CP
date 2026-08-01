# B. Shrink
 
| Field | Value |
|---|---|
| **Contest** | [2117](https://codeforces.com/contest/2117) |
| **Problem** | [2117B — Shrink](https://codeforces.com/contest/2117/problem/B) |
| **Rating** | 800 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

A shrink operation on an array `a` of size `m` is defined as follows:

 - Choose an index `i` (`2 ≤ i ≤ m - 1`) such that `a_i > a_i - 1` and `a_i > a_i + 1`.
- Remove `a_i` from the array.

Define the *score* of a permutation`^∗` `p` as the *maximum* number of times that you can perform the shrink operation on `p`.

Yousef has given you a single integer `n`. Construct a permutation `p` of length `n` with the **maximum** possible *score*. If there are multiple answers, you can output any of them.

`^∗`A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

The first line of the input contains an integer `t` (`1 ≤ t ≤ 10^3`) — the number of test cases.

Each test case contains an integer `n` (`3 ≤ n ≤ 2 · 10^5`) — the size of the permutation.

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10^5`.

## Output

For each test case, output any permutation `p_1, p_2, …, p_n` that maximizes the number of shrink operations.

## Examples

**Example:**

```
2
3
6
```

**Output:**

```
1 3 2
2 3 6 4 5 1

```

## Note

In the first test case: 

 - We choose `p = [1, 3, 2]`.
- Choose index `2`, and remove `p_2` from the array. The array becomes `p = [1, 2]`.

It can be shown that the maximum number of operations we can perform is `1`. Another valid answer is `p = [2, 3, 1]`.

In the second test case:

 - We choose `p = [2, 3, 6, 4, 5, 1]`.
- Choose index `5`, and remove `p_5` from the array. The array becomes `p = [2, 3, 6, 4, 1]`.
- Choose index `3`, and remove `p_3` from the array. The array becomes `p = [2, 3, 4, 1]`.
- Choose index `3`, and remove `p_3` from the array. The array becomes `p = [2, 3, 1]`.
- Choose index `2`, and remove `p_2` from the array. The array becomes `p = [2, 1]`.

The maximum number of operations we can perform is `4`. Any permutation with a score of `4` is valid.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2117/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
