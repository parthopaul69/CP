# A - Alphabet Classification

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [AWC0054](https://atcoder.jp/contests/awc0054) |
| **Problem** | [A - Alphabet Classification](https://atcoder.jp/contests/awc0054/tasks/awc0054_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 8 ms |
| **Memory** | 1704 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/awc0054/submissions/75187182) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Takahashi has a list of  N  strings  S_1, S_2, …, S_N . He wants to classify these strings into groups based on their first character. That is, all strings with the same first character belong to the same group, and strings with different first characters belong to different groups.

Find the number of strings in the group that contains the most strings. Note that even if the same string appears multiple times in the list, each occurrence is counted separately as one string. In other words, the number of strings in a group is counted without removing duplicates.

### Constraints

- 1 ≤ N ≤ 10^5

- S_i  is a string consisting only of lowercase English letters with length between  1  and  20 , inclusive.

## Input

```
N
S_1
S_2
\vdots
S_N
```

The first line contains an integer  N  representing the number of strings. The  i -th of the following  N  lines contains the string  S_i .

## Output

Print in one line the number of strings in the group that contains the most strings.

## Examples

**Sample Input 1:**

```
5
apple
apricot
banana
avocado
berry
```

**Sample Output 1:**

```
3
```

**Sample Input 2:**

```
6
cat
car
dog
dove
eel
egg
```

**Sample Output 2:**

```
2
```

**Sample Input 3:**

```
12
alpha
atom
angle
beta
banana
boat
boat
cat
circle
cider
apple
ant
```

**Sample Output 3:**

```
5
```

**Sample Input 4:**

```
30
moon
map
milk
mango
mint
mouse
melon
mild
sun
sand
sea
stone
smile
sound
soup
apple
arrow
ant
book
bird
blue
cat
cloud
camel
dog
drum
echo
earth
zebra
zero
```

**Sample Output 4:**

```
8
```

**Sample Input 5:**

```
1
abcdefghijklmnopqrst
```

**Sample Output 5:**

```
1
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/awc0054/tasks/awc0054_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
