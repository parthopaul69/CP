# B - Mapping

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC454](https://atcoder.jp/contests/abc454) |
| **Problem** | [B - Mapping](https://atcoder.jp/contests/abc454/tasks/abc454_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 0 ms |
| **Memory** | 1580 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc454/submissions/75176748) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

There are  N  people numbered  1  through  N .

There are  M  types of clothes numbered  1  through  M . Person  i  is wearing clothes  F_i .

Answer the following two questions with Yes or No.

- Question  1 : Are all  N  people wearing different types of clothes?

- Question  2 : For every one of the  M  types of clothes, is there at least one person wearing that type?

### Constraints

- 1 ≤ N ≤ 100

- 1 ≤ M ≤ 100

- 1 ≤ F_i ≤ M

- All input values are integers.

## Input

The input is given from Standard Input in the following format:

```
N M
F_1 F_2 \dots F_N
```

## Output

Output two lines. The  i -th line should contain `Yes` if the answer to question  i  is Yes, and `No` if it is No.

## Examples

**Sample Input 1:**

```
3 4
1 2 4
```

**Sample Output 1:**

```
Yes
No
```

**Sample Input 2:**

```
4 2
1 2 1 2
```

**Sample Output 2:**

```
No
Yes
```

**Sample Input 3:**

```
4 4
1 3 2 1
```

**Sample Output 3:**

```
No
No
```

**Sample Input 4:**

```
5 5
1 3 4 2 5
```

**Sample Output 4:**

```
Yes
Yes
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc454/tasks/abc454_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
