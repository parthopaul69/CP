# A - Stone Taking Game

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [AWC0053](https://atcoder.jp/contests/awc0053) |
| **Problem** | [A - Stone Taking Game](https://atcoder.jp/contests/awc0053/tasks/awc0053_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 4 ms |
| **Memory** | 2348 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/awc0053/submissions/75168940) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Takahashi and Aoki are playing a stone taking game.

There are  N  piles of stones on the table, and each pile is numbered from  1  to  N . Pile  i  contains  A_i  stones.

The game starts with Takahashi, and the two players alternately perform the following operation:

- Choose one pile that still has stones remaining, and remove  1  stone from that pile.

- A pile with  0  stones becomes empty and can no longer be chosen.

When all piles become empty, the player who took the last stone wins.

Determine which player wins when both players play optimally.

### Constraints

- 1 ≤ N ≤ 10^5

- 1 ≤ A_i ≤ 10^9

- All inputs are integers

## Input

```
N
A_1 A_2 \ldots A_N
```

- The first line gives the number of piles of stones  N .

- The second line gives  A_1, A_2, …, A_N , the number of stones in each pile, separated by spaces.

## Output

If Takahashi wins, print `Takahashi`. If Aoki wins, print `Aoki`.

## Examples

**Sample Input 1:**

```
3
1 2 1
```

**Sample Output 1:**

```
Aoki
```

**Sample Input 2:**

```
2
3 4
```

**Sample Output 2:**

```
Takahashi
```

**Sample Input 3:**

```
8
7 1 4 2 6 3 5 8
```

**Sample Output 3:**

```
Aoki
```

**Sample Input 4:**

```
20
1000000000 999999999 123456789 987654321 500000000 400000000 300000000 200000000 100000000 999999998 7654321 8765432 135791357 246802468 111111111 222222222 333333333 444444444 555555555 666666667
```

**Sample Output 4:**

```
Takahashi
```

**Sample Input 5:**

```
1
1000000000
```

**Sample Output 5:**

```
Aoki
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/awc0053/tasks/awc0053_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
