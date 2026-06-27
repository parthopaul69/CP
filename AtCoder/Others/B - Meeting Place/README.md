# B - Meeting Place

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [AWC0053](https://atcoder.jp/contests/awc0053) |
| **Problem** | [B - Meeting Place](https://atcoder.jp/contests/awc0053/tasks/awc0053_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 24 ms |
| **Memory** | 3116 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/awc0053/submissions/75169722) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Takahashi is going to meet up with  N  friends.

His friends are located on a number line, and the  i -th friend is at coordinate  X_i  (different friends may be at the same coordinate).

Takahashi wants to decide on exactly one meeting place. If he sets the meeting place at an integer coordinate  P  on the number line, each friend will travel to that location. The sum of all friends' travel distances is called the "total travel distance." That is, the total travel distance is  |X_1 - P| + |X_2 - P| + ·s + |X_N - P| . Note that Takahashi's own travel distance is not included in the total travel distance.

Takahashi wants to minimize the total travel distance by choosing  P  optimally, in order to reduce the burden on his friends as much as possible.

Find the minimum value of the total travel distance.

### Constraints

- 1 ≤ N ≤ 2 × 10^5

- -10^9 ≤ X_i ≤ 10^9

- All inputs are integers.

## Input

```
N
X_1 X_2 \cdots X_N
```

- The first line contains an integer  N , representing the number of friends.

- The second line contains integers  X_1, X_2, …, X_N  separated by spaces, representing the coordinates of each friend.

## Output

Print the minimum value of the total travel distance as an integer on a single line.

## Examples

**Sample Input 1:**

```
3
1 2 10
```

**Sample Output 1:**

```
9
```

**Sample Input 2:**

```
4
0 0 5 9
```

**Sample Output 2:**

```
14
```

**Sample Input 3:**

```
10
-12 4 7 -3 0 9 9 15 -8 2
```

**Sample Output 3:**

```
65
```

**Sample Input 4:**

```
20
12 -5 30 7 7 -18 42 0 3 3 3 50 -1 9 -15 100 -40 8 21 21
```

**Sample Output 4:**

```
363
```

**Sample Input 5:**

```
1
-1000000000
```

**Sample Output 5:**

```
0
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/awc0053/tasks/awc0053_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
