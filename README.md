# HackerRank 3rd Semester Portfolio

**Activity 8: HackerRank Algorithmic Problem-Solving & Portfolio Integration**
Portfolio Building, 3rd Semester B.Tech (Computer Science & Engineering)

|                        |                                                  |
| ---------------------- | ------------------------------------------------ |
| **Name**               | Sahana N                                         |
| **Language used**      | C                                                |
| **HackerRank profile** | https://www.hackerrank.com/profile/sahananangadi |

## About

This repository contains my solutions to the 5 mandatory HackerRank problems, with the time and space complexity of each, plus screenshots of my accepted submissions and earned badges.

## Mandatory problems and complexity analysis

| #   | Problem              | Topic                | Time     | Space    | Solution                                         |
| --- | -------------------- | -------------------- | -------- | -------- | ------------------------------------------------ |
| 1   | Diagonal Difference  | 2D arrays / matrices | O(N)     | O(1)     | [solution.c](01-Diagonal-Difference/solution.c)  |
| 2   | Dynamic Array        | Dynamic arrays, XOR  | O(N + Q) | O(N + Q) | [solution.c](02-Dynamic-Array/solution.c)        |
| 3   | Time Conversion      | Strings and logic    | O(1)     | O(1)     | [solution.c](03-Time-Conversion/solution.c)      |
| 4   | Compare the Triplets | Basic implementation | O(1)     | O(1)     | [solution.c](04-Compare-the-Triplets/solution.c) |
| 5   | Sparse Arrays        | Hash table, strings  | O(N + Q) | O(N + Q) | [solution.c](05-Sparse-Arrays/solution.c)        |

N is the input size and Q is the number of queries. For problems 2 and 5, the result list holds up to Q values on top of the N stored items, so the space is O(N + Q).

## Approach summary

1. **Diagonal Difference:** one loop adds `arr[i][i]` (primary) and `arr[i][n-1-i]` (secondary), then returns the absolute difference.
2. **Dynamic Array:** n buckets, each a growable array that doubles its capacity with `realloc`. The bucket index is `(x ^ lastAnswer) % n`.
3. **Time Conversion:** only the hour changes. 12 AM becomes 00, and any PM hour except 12 gets +12.
4. **Compare the Triplets:** compare `a[i]` and `b[i]` at each of 3 positions and give the winner a point.
5. **Sparse Arrays:** count every string once in a hash table (chaining), then answer each query with one lookup instead of scanning all strings.

## Screenshots

### Badge: 1st star earned

![1st star badge](screenshots/Hackerrank_1st_Star.png)

### 5th code challenge solved

![5th challenge solved](screenshots/Hackerrank_5th_code_Challenge.png)

### Accepted submissions

![Diagonal Difference accepted](screenshots/01-diagonal-difference.png)
![Dynamic Array accepted](screenshots/02-dynamic-array.png)
![Time Conversion accepted](screenshots/03-time-conversion.png)
![Compare the Triplets accepted](screenshots/04-compare-the-triplets.png)
![Sparse Arrays accepted](screenshots/05-sparse-arrays.png)

### Badges: 2nd and 3rd star

![2nd star badge](screenshots/Hackerrank_2nd_star.png)
![3rd star badge](screenshots/Hackerrank_3rd_star.png)

## Extra practice problems

Solved to earn the Problem Solving star badge:

- Simple Array Sum
- A Very Big Sum
- Plus Minus
- Staircase
- Mini-Max Sum
- Birthday Cake Candles
- Grading Students
- Breaking the Records
- Lonely Integer
- Number Line Jumps
- Sock Merchant
- Counting Valleys

## Repository structure

```
HackerRank-3rdSem-Portfolio
├── 01-Diagonal-Difference/solution.c
├── 02-Dynamic-Array/solution.c
├── 03-Time-Conversion/solution.c
├── 04-Compare-the-Triplets/solution.c
├── 05-Sparse-Arrays/solution.c
├── Extra-Practice/
│   ├── simple-array-sum.c
│   ├── a-very-big-sum.c
│   ├── plus-minus.c
│   ├── staircase.c
│   ├── mini-max-sum.c
│   ├── birthday-cake-candles.c
│   ├── grading-students.c
│   ├── breaking-the-records.c
│   ├── lonely-integer.c
│   ├── number-line-jumps.c
│   └── sock-merchant.c
├── screenshots/
└── README.md
```

## Notes

- Each `solution.c` contains the function HackerRank asks for. HackerRank supplies the input and output code, so these files are not standalone programs.
- Every solution has a header comment with the problem link, complexity and main idea.
- All 5 mandatory problems passed 100% of test cases on HackerRank.
