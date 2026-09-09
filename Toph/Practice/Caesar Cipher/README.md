# [Caesar Cipher](https://toph.co/p/caesar-cipher)

**Time Limit**: `1s` | **Memory Limit**: `512 MB`

## Problem Statement
Byang wants to write a secret message to his friend. He has recently discovered Caesar Cipher.

Caesar cipher is simple encryption techniques where each letter in the message is replaced by a letter some fixed number of positions down the alphabet.

For example, with a left shift of 2, C would be replaced by A, D would become B, and so on.

Letters:

```
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

After applying Caesar cipher of left shift 2:

```
YZABCDEFGHIJKLMNOPQRSTUVWX
```

Input

The first line of the input will contain one integer N (0 < N < 26), indicating the left shift of the cipher.

The second line will contain a message in all lower case alphabets and spaces. The message will contain at most 100 characters.

Output

Print the message after applying the Ceaser cipher using the specified left shift.

Example

Input

```
2
hello world
```

Output

```
fcjjm umpjb
```

## Samples
**Sample Input:**

```
2
hello world
```

**Sample Output:**

```
fcjjm umpjb
```

## Metadata
- **Category**: Practice
- **Contest**: N/A
- **Tags**: Implementation