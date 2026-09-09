# [BPL Mubarak!](https://toph.co/p/bpl-mubarak)

**Time Limit**: `1s` | **Memory Limit**: `512 MB`

## Problem Statement
Bangladesh Premier League is in Sylhet for the first time. Today's match is Sylhet Sixers vs the Dhaka Dynamites. Dhaka Dynamites seems to have a good batting line-up. There are many people coming to Sylhet International Stadium to see this match and you are one of them.

Now you want to count how many balls there are in an over. Dhaka Dynamites is batting first and Nasir Hossain from Sylhet Sixers is bowling his first over.

Nasir bowled 9 times in his first over.

This gave you an idea: Why not write a program that can determine the number of legal balls based on the outcomes of each ball and hence the number of overs played.

Given a series of outcomes of balls bowled by a bowler, you have to determine the number of legal balls and the number of overs that have been played. The following are the possible outcomes of each ball:

| Outcome | Description |
|---|---|

| N | No ball |
| W | Wide ball |
| D | Dead ball |
| O | Out |
| 0-6 | Runs scored |

As always, no ball, wide ball, and dead balls are not to be counted.

Input

The input starts with an integer T (0 < T ≤ 100) denoting the number of test cases. Each case starts with a line containing a string S (0 < Length of S ≤ 100) representing the outcomes of each ball. It is guaranteed that there is at least one legal ball.

Output

For each test case print, the number of legal balls and overs played. Make sure you are using the correct pluralization (OVER vs OVERS, and BALL vs BALLS).

Example

Input

```
3
W123NW6WD64
444WO213
444
```

Output

```
1 OVER
1 OVER 1 BALL
3 BALLS
```

## Samples
**Sample Input:**

```
3
W123NW6WD64
444WO213
444
```

**Sample Output:**

```
1 OVER
1 OVER 1 BALL
3 BALLS
```

## Metadata
- **Category**: Practice
- **Contest**: N/A
- **Tags**: Implementation

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*