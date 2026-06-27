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

You are given  N  strings  S_1, S_2, …, S_N  consisting of lowercase English letters.

Define  N  digits  C_1, C_2, …, C_N  as follows:

- If the first character of  S_i  is one of `a`, `b`, `c`, then  C_i=  `2`

- If the first character of  S_i  is one of `d`, `e`, `f`, then  C_i=  `3`

- If the first character of  S_i  is one of `g`, `h`, `i`, then  C_i=  `4`

- If the first character of  S_i  is one of `j`, `k`, `l`, then  C_i=  `5`

- If the first character of  S_i  is one of `m`, `n`, `o`, then  C_i=  `6`

- If the first character of  S_i  is one of `p`, `q`, `r`, `s`, then  C_i=  `7`

- If the first character of  S_i  is one of `t`, `u`, `v`, then  C_i=  `8`

- If the first character of  S_i  is one of `w`, `x`, `y`, `z`, then  C_i=  `9`

Output the string obtained by concatenating  C_1, C_2, …, C_N  in this order.

### Constraints

- 1 ≤ N ≤ 10

- N  is an integer.

- S_i  is a string of length between  1  and  10 , inclusive, consisting of lowercase English letters.

## Input

The input is given from Standard Input in the following format:

```
N
S_1 S_2 \ldots S_N
```

## Output

Output the string obtained by concatenating  C_1, C_2, …, C_N  in this order.

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
