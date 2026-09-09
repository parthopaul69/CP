# H. Standoff
 
| Field | Value |
|---|---|
| **Contest** | [106619](https://codeforces.com/contest/106619) |
| **Problem** | [106619H — Standoff](https://codeforces.com/contest/106619/problem/H) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Isamatdin has `n` toys arranged in a row. The `i`-th toy has an integer `aᵢ`. He wanted to sort them because otherwise, his mother would scold him.

However, Isamatdin never liked arranging toys in order, so his friend JahonaliX gave him a magic wand to help. Unfortunately, JahonaliX made a small mistake while creating the wand.

But Isamatdin couldn't wait any longer and decided to use the broken wand anyway. The wand can only swap two toys if their integers have **different parity** (one is even, the other is odd). In other words, you can swap toys in positions `(i, j)` only if `aᵢ mod 2 ≠ aⱼ mod 2`, where `mod` — is the remainder of integer division.

Now he wants to know the **lexicographically smallest**`∗` arrangement he can achieve using this broken wand.

`∗`A sequence `p` is *lexicographically smaller* than a sequence `q` if there exists an index `i` such that `pⱼ = qⱼ` for all `j < i`, and `pᵢ < qᵢ`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 2 · 10⁵`) — the number of toys. 

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ 10⁹`) — the integers of the toys.

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output `n` integers — the lexicographically smallest sequence that can be obtained using the described operation.

## Examples

**Example:**

```
7
4
2 3 1 4
5
3 2 1 3 4
4
3 7 5 1
2
1000000000 2
3
1 3 5
5
2 5 3 1 7
4
2 4 8 6
```

**Output:**

```
1 2 3 4 
1 2 3 3 4 
3 7 5 1 
1000000000 2 
1 3 5 
1 2 3 5 7 
2 4 8 6 
```

## Note

In the first test case, we can swap positions `(1, 3)` and then `(2, 3)`.

In the second test case, we can swap positions `(1, 2)`, `(1, 3)`, and then `(2, 3)`.

In the third and fourth test cases, we can't swap any positions because all toy integers have the same parity.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/106619/problem/H)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
