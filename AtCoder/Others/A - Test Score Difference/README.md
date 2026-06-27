# A - Test Score Difference

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [AWC0060](https://atcoder.jp/contests/awc0060) |
| **Problem** | [A - Test Score Difference](https://atcoder.jp/contests/awc0060/tasks/awc0060_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 16 ms |
| **Memory** | 3628 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/awc0060/submissions/75387433) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

There are  N  students in Takahashi's class besides Takahashi himself. In a recent test, Takahashi scored  X  points. The  i -th student  (1 ≤ i ≤ N)  scored  A_i  points.

Takahashi feels frustrated when he sees a student who scored higher than him. For each student  i , the frustration Takahashi feels is  A_i - X  if  A_i > X , and  0  otherwise.

Find the total frustration Takahashi feels toward all  N  students.

### Constraints

- 1 ≤ N ≤ 5 × 10^5

- 0 ≤ X ≤ 100

- 0 ≤ A_i ≤ 100

- All inputs are integers

## Input

```
N X
A_1 A_2 \cdots A_N
```

- The first line contains the number of students besides Takahashi  N  and Takahashi's score  X , separated by a space.

- The second line contains the scores of the  N  students  A_1, A_2, …, A_N , separated by spaces.

## Output

Print the total frustration Takahashi feels as an integer on a single line.

## Examples

**Sample Input 1:**

```
5 60
55 60 61 80 40
```

**Sample Output 1:**

```
21
```

**Sample Input 2:**

```
4 100
99 100 80 0
```

**Sample Output 2:**

```
0
```

**Sample Input 3:**

```
12 48
30 48 49 50 10 100 47 48 51 52 0 75
```

**Sample Output 3:**

```
89
```

**Sample Input 4:**

```
30 73
70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
```

**Sample Output 4:**

```
351
```

**Sample Input 5:**

```
1 0
100
```

**Sample Output 5:**

```
100
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/awc0060/tasks/awc0060_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
