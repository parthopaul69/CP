# A. Life of a Flower
 
| Field | Value |
|---|---|
| **Contest** | [1585](https://codeforces.com/contest/1585) |
| **Problem** | [1585A — Life of a Flower](https://codeforces.com/contest/1585/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Petya has got an interesting flower. Petya is a busy person, so he sometimes forgets to water it. You are given n days from Petya's live and you have to determine what happened with his flower in the end.

The flower grows as follows: 

 - If the flower isn't watered for two days in a row, it dies.
- If the flower is watered in the i-th day, it grows by 1 centimeter.
- If the flower is watered in the i-th and in the (i-1)-th day (i > 1), then it grows by 5 centimeters instead of 1.
- If the flower is not watered in the i-th day, it does not grow.

At the beginning of the 1-st day the flower is 1 centimeter tall. What is its height after n days?

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). Description of the test cases follows.

The first line of each test case contains the only integer n (1 ≤ n ≤ 100).

The second line of each test case contains n integers a_1, a_2, …, a_n (a_i = 0 or a_i = 1). If a_i = 1, the flower is watered in the i-th day, otherwise it is not watered.

## Output

For each test case print a single integer k — the flower's height after n days, or -1, if the flower dies.

## Examples

**Example:**

```
4
3
1 0 1
3
0 1 1
4
1 0 0 1
1
0

```

**Output:**

```
3
7
-1
1

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1585/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
