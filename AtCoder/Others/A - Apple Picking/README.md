# A - Apple Picking

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [AWC0055](https://atcoder.jp/contests/awc0055) |
| **Problem** | [A - Apple Picking](https://atcoder.jp/contests/awc0055/tasks/awc0055_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 43 ms |
| **Memory** | 1676 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/awc0055/submissions/75205287) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Takahashi is picking apples in an orchard.

There are  N  apple trees lined up in a row in the orchard, numbered tree  1 , tree  2 ,  … , tree  N  from left to right. Tree  i  has  D_i  apples on it.

Takahashi starts from tree  1  and proceeds to the right, harvesting apples according to the following pattern:

- Harvest apples from  K  consecutive trees (for each tree he harvests, he picks all the apples on that tree).

- Immediately after, he skips  1  tree without harvesting, as he is tired and takes a rest.

He repeats this pattern starting from tree  1  until he reaches tree  N . If he reaches tree  N  in the middle of a pattern, he stops there. Takahashi cannot freely choose which trees to harvest or the order in which to harvest them.

Find the total number of apples Takahashi harvests.

For example, when  N = 7, K = 3 , Takahashi harvests from trees  1, 2, 3 , skips tree  4 , and harvests from trees  5, 6, 7 .

Also, when  N = 8, K = 2 , Takahashi harvests from trees  1, 2 , skips tree  3 , harvests from trees  4, 5 , skips tree  6 , and harvests from trees  7, 8 .

### Constraints

- 1 ≤ N ≤ 10^6

- 1 ≤ K ≤ N

- 1 ≤ D_i ≤ 10^9   (1 ≤ i ≤ N)

- All input values are integers.

## Input

```
N K
D_1 D_2 \ldots D_N
```

- The first line contains an integer  N  representing the number of trees and an integer  K  representing the number of consecutive trees that can be harvested, separated by a space.

- The second line contains integers  D_1, D_2, …, D_N  representing the number of apples on each tree, separated by spaces.

## Output

Print the total number of apples Takahashi harvests on a single line.

## Examples

**Sample Input 1:**

```
7 3
5 3 2 8 4 1 6
```

**Sample Output 1:**

```
21
```

**Sample Input 2:**

```
8 2
3 1 4 1 5 9 2 6
```

**Sample Output 2:**

```
18
```

**Sample Input 3:**

```
15 4
10 20 30 40 50 60 70 80 90 100 110 120 130 140 150
```

**Sample Output 3:**

```
900
```

**Sample Input 4:**

```
20 3
5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100
```

**Sample Output 4:**

```
750
```

**Sample Input 5:**

```
1 1
1000000000
```

**Sample Output 5:**

```
1000000000
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/awc0055/tasks/awc0055_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
