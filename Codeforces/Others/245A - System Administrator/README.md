# A. System Administrator
 
| Field | Value |
|---|---|
| **Contest** | [245](https://codeforces.com/contest/245) |
| **Problem** | [245A — System Administrator](https://codeforces.com/contest/245/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Polycarpus is a system administrator. There are two servers under his strict guidance — *a* and *b*. To stay informed about the servers' performance, Polycarpus executes commands "`ping a`" and "`ping b`". Each ping command sends exactly ten packets to the server specified in the argument of the command. Executing a program results in two integers *x* and *y* (*x* + *y* = 10; *x*, *y* ≥ 0). These numbers mean that *x* packets successfully reached the corresponding server through the network and *y* packets were lost.

Today Polycarpus has performed overall *n* ping commands during his workday. Now for each server Polycarpus wants to know whether the server is "alive" or not. Polycarpus thinks that the server is "alive", if at least half of the packets that we send to this server reached it successfully along the network.

Help Polycarpus, determine for each server, whether it is "alive" or not by the given commands and their results.

## Input

The first line contains a single integer *n* (2 ≤ *n* ≤ 1000) — the number of commands Polycarpus has fulfilled. Each of the following *n* lines contains three integers — the description of the commands. The *i*-th of these lines contains three space-separated integers *t*_*i*, *x*_*i*, *y*_*i* (1 ≤ *t*_*i* ≤ 2; *x*_*i*, *y*_*i* ≥ 0; *x*_*i* + *y*_*i* = 10). If *t*_*i* = 1, then the *i*-th command is "`ping a`", otherwise the *i*-th command is "`ping b`". Numbers *x*_*i*, *y*_*i* represent the result of executing this command, that is, *x*_*i* packets reached the corresponding server successfully and *y*_*i* packets were lost.

It is guaranteed that the input has at least one "`ping a`" command and at least one "`ping b`" command.

## Output

In the first line print string "`LIVE`" (without the quotes) if server *a* is "alive", otherwise print "`DEAD`" (without the quotes).

In the second line print the state of server *b* in the similar format.

## Examples

**Example 1:**

```
2
1 5 5
2 6 4

```

**Output 1:**

```
LIVE
LIVE

```

**Example 2:**

```
3
1 0 10
2 0 10
1 10 0

```

**Output 2:**

```
LIVE
DEAD

```

## Note

Consider the first test case. There 10 packets were sent to server *a*, 5 of them reached it. Therefore, at least half of all packets sent to this server successfully reached it through the network. Overall there were 10 packets sent to server *b*, 6 of them reached it. Therefore, at least half of all packets sent to this server successfully reached it through the network.

Consider the second test case. There were overall 20 packages sent to server *a*, 10 of them reached it. Therefore, at least half of all packets sent to this server successfully reached it through the network. Overall 10 packets were sent to server *b*, 0 of them reached it. Therefore, less than half of all packets sent to this server successfully reached it through the network.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/245/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
