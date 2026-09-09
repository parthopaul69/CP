# [The Sixfold Signal](https://toph.co/p/the-sixfold-signal)

**Time Limit**: `1s` | **Memory Limit**: `512 MB`

## Problem Statement
In a futuristic communication system, every signal is assigned a numerical **strength level**. Engineers have discovered that a valid signal must follow a special pattern: starting from the initial strength of `1`, the signal strength must be multiplied by `6` at every stage.

Thus, the valid signal strengths are:

`1, 6, 36, 216, 1296, ...`

Given an integer `n`, determine whether it represents a valid signal strength.

In other words, `n` is a valid signal strength if there exists a non-negative integer `x` such that:

n = 6^x

Input

The input contains a single integer `n`.

Constraints

-2³¹ ≤ n ≤ 2³¹ - 1

Output

Print `YES` if `n` is a power of `6`, otherwise, print `NO`.

Examples

Input

```
36
```

Output

```
YES
```

Input

```
12
```

Output

```
NO
```

## Samples
**Sample Input 1:**

```
36
```

**Sample Output 1:**

```
YES
```

**Sample Input 2:**

```
12
```

**Sample Output 2:**

```
NO
```

## Metadata
- **Category**: Practice
- **Contest**: N/A
- **Tags**: Math