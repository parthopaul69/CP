# B - 459

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC459](https://atcoder.jp/contests/abc459) |
| **Problem** | [B - 459](https://atcoder.jp/contests/abc459/tasks/abc459_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 0 ms |
| **Memory** | 1704 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc459/submissions/76037684) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

You are given  N  strings  S₁, S₂, …, SN  consisting of lowercase English letters.

Define  N  digits  C₁, C₂, …, CN  as follows:

- If the first character of  Sᵢ  is one of `a`, `b`, `c`, then  Cᵢ=  `2`

- If the first character of  Sᵢ  is one of `d`, `e`, `f`, then  Cᵢ=  `3`

- If the first character of  Sᵢ  is one of `g`, `h`, `i`, then  Cᵢ=  `4`

- If the first character of  Sᵢ  is one of `j`, `k`, `l`, then  Cᵢ=  `5`

- If the first character of  Sᵢ  is one of `m`, `n`, `o`, then  Cᵢ=  `6`

- If the first character of  Sᵢ  is one of `p`, `q`, `r`, `s`, then  Cᵢ=  `7`

- If the first character of  Sᵢ  is one of `t`, `u`, `v`, then  Cᵢ=  `8`

- If the first character of  Sᵢ  is one of `w`, `x`, `y`, `z`, then  Cᵢ=  `9`

Output the string obtained by concatenating  C₁, C₂, …, CN  in this order.

### Constraints

- 1 ≤ N ≤ 10

- N  is an integer.

- Sᵢ  is a string of length between  1  and  10 , inclusive, consisting of lowercase English letters.

## Input

The input is given from Standard Input in the following format:

```
N
S_1 S_2 \ldots S_N
```

## Output

Output the string obtained by concatenating  C₁, C₂, …, CN  in this order.

## Examples

**Sample Input 1:**

```
2
algorithm heuristic
```

**Sample Output 1:**

```
24
```

**Sample Input 2:**

```
3
i love you
```

**Sample Output 2:**

```
459
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc459/tasks/abc459_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
