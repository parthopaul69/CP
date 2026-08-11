# C. Odd/Even Increments
 
| Field | Value |
|---|---|
| **Contest** | [1669](https://codeforces.com/contest/1669) |
| **Problem** | [1669C — Odd/Even Increments](https://codeforces.com/contest/1669/problem/C) |
| **Rating** | 800 |
| **Tags** | greedy, implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Given an array `a=[a_1,a_2,…,a_n]` of `n` positive integers, you can do operations of two types on it:

 - Add `1` to **every** element with an **odd** index. In other words change the array as follows: `a_1 := a_1 +1, a_3 := a_3 + 1, a_5 := a_5+1, …`.
- Add `1` to **every** element with an **even** index. In other words change the array as follows: `a_2 := a_2 +1, a_4 := a_4 + 1, a_6 := a_6+1, …`.

Determine if after any number of operations it is possible to make the final array contain only even numbers or only odd numbers. In other words, determine if you can make all elements of the array have the same parity after any number of operations.

Note that you can do operations of both types any number of times (even none). Operations of different types can be performed a different number of times.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 100`) — the number of test cases.

The first line of each test case contains an integer `n` (`2 ≤ n ≤ 50`) — the length of the array.

The second line of each test case contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 10^3`) — the elements of the array.

Note that after the performed operations the elements in the array can become greater than `10^3`.

## Output

Output `t` lines, each of which contains the answer to the corresponding test case. As an answer, output "`YES`" if after any number of operations it is possible to make the final array contain only even numbers or only odd numbers, and "`NO`" otherwise.

You can output the answer in any case (for example, the strings "`yEs`", "`yes`", "`Yes`" and "`YES`" will be recognized as a positive answer).

## Examples

**Example:**

```
4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000
```

**Output:**

```
YES
NO
YES
YES

```

## Note

For the first test case, we can increment the elements with an even index, obtaining the array `[1, 3, 1]`, which contains only odd numbers, so the answer is "`YES`".

For the second test case, we can show that after performing any number of operations we won't be able to make all elements have the same parity, so the answer is "`NO`".

For the third test case, all elements already have the same parity so the answer is "`YES`".

For the fourth test case, we can perform one operation and increase all elements at odd positions by `1`, thus obtaining the array `[1001, 1, 1001, 1, 1001]`, and all elements become odd so the answer is "`YES`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1669/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
