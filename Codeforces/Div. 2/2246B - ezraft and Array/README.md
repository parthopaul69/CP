# B. ezraft and Array
 
| Field | Value |
|---|---|
| **Contest** | [2246](https://codeforces.com/contest/2246) |
| **Problem** | [2246B — ezraft and Array](https://codeforces.com/contest/2246/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

You are given a single integer `n.` Construct an array of `n` distinct positive integers `a_1, …, a_n` such that for all `i (1 ≤ i ≤ n)`, `a_1 + a_2 + a_3 + … + a_n` is divisible by `a_i,` or determine that no such array exists.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 50`). The description of the test cases follows.

The first and only line of each test case contains a single integer `n (1 ≤ n ≤ 50).`

## Output

For each test case, if there is no solution, output a single integer `-1`.

Otherwise, output `n` integers `a_1, …, a_n (1 ≤ a_i ≤ 10^17)` — an array satisfying the conditions.

If there are multiple solutions, print any of them.

## Examples

**Example:**

```
3
1
4
5
```

**Output:**

```
1
1 9 2 6
12 3 10 20 15

```

## Note

In the first test case, the condition is clearly satisfied, since `1` is divisible by itself.

In the second test case, the output is `a = [1,9,2,6].` We have `a_1 + a_2 + a_3 + a_4 = 18,` which is divisible by all `a_i.`

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2246/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
