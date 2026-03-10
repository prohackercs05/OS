# Slip 7

## Questions

**Q.1** Resource-Request algorithm (Safety check) with specific snapshot.
P0(2,0,0,1, max 4,2,1,2), P1(3,1,2,1, max 5,2,5,2), P2(2,1,0,3, max 2,3,1,6), P3(1,3,1,2, max 1,4,2,4), P4(1,4,3,2, max 3,6,6,5). Available: 3,3,2,1.

**Q.2** SCAN disk scheduling. Requests: 82, 170, 43, 140, 24, 16, 190. Head: 50, Direction: Right.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Safety Check

- Uses the safety algorithm part of Banker's to determine if the system can satisfy all processes.
- It finds a sequence where each process's "Need" can be met by "Available" resources.

### Program 2: SCAN (Right)

- Starts at 50, moves Right (towards max block), then reverses and moves Left to 0.
- Servicing order depends on the sorted requests and the starting direction.
