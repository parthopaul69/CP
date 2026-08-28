# A. Combination Lock
 
| Field | Value |
|---|---|
| **Contest** | [540](https://codeforces.com/contest/540) |
| **Problem** | [540A — Combination Lock](https://codeforces.com/contest/540/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Scrooge McDuck keeps his most treasured savings in a home safe with a combination lock. Each time he wants to put there the treasures that he's earned fair and square, he has to open the lock.

 ![](https://espresso.codeforces.com/e132ae3e6225db87df8ecbec50e9fd1aed78b775.png) The combination lock is represented by *n* rotating disks with digits from 0 to 9 written on them. Scrooge McDuck has to turn some disks so that the combination of digits on the disks forms a secret combination. In one move, he can rotate one disk one digit forwards or backwards. In particular, in one move he can go from digit 0 to digit 9 and vice versa. What minimum number of actions does he need for that?

## Input

The first line contains a single integer *n* (1 ≤ *n* ≤ 1000) — the number of disks on the combination lock.

The second line contains a string of *n* digits — the original state of the disks.

The third line contains a string of *n* digits — Scrooge McDuck's combination that opens the lock.

## Output

Print a single integer — the minimum number of moves Scrooge McDuck needs to open the lock.

## Examples

**Example:**

```
5
82195
64723

```

**Output:**

```
13

```

## Note

In the sample he needs 13 moves:

 - 1 disk: ![](https://espresso.codeforces.com/b8967f65a723782358b93eff9ce69f336817cf70.png)
- 2 disk: ![](https://espresso.codeforces.com/07fa58573ece0d32c4d555e498d2b24d2f70f36a.png)
- 3 disk: ![](https://espresso.codeforces.com/cc2275d9252aae35a6867c6a5b4ba7596e9a7626.png)
- 4 disk: ![](https://espresso.codeforces.com/b100aea470fcaaab4e9529b234ba0d7875943c10.png)
- 5 disk: ![](https://espresso.codeforces.com/eb2cbe4324cebca65b85816262a85e473cd65967.png)

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/540/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
