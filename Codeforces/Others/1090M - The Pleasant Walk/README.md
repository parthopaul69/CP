# M. The Pleasant Walk
 
| Field | Value |
|---|---|
| **Contest** | [1090](https://codeforces.com/contest/1090) |
| **Problem** | [1090M — The Pleasant Walk](https://codeforces.com/contest/1090/problem/M) |
| **Rating** | 1000 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 512 megabytes |

---

There are `n` houses along the road where Anya lives, each one is painted in one of `k` possible colors.

Anya likes walking along this road, but she doesn't like when two adjacent houses at the road have the same color. She wants to select a long segment of the road such that no two adjacent houses have the same color.

Help Anya find the longest segment with this property.

## Input

The first line contains two integers `n` and `k` — the number of houses and the number of colors (`1 ≤ n ≤ 100 000`, `1 ≤ k ≤ 100 000`).

The next line contains `n` integers `a_1, a_2, …, a_n` — the colors of the houses along the road (`1 ≤ a_i ≤ k`).

## Output

Output a single integer — the maximum number of houses on the road segment having no two adjacent houses of the same color.

## Examples

**Example:**

```
8 3
1 2 3 3 2 1 2 2

```

**Output:**

```
4

```

## Note

In the example, the longest segment without neighboring houses of the same color is from the house 4 to the house 7. The colors of the houses are `[3, 2, 1, 2]` and its length is 4 houses.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1090/problem/M)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
