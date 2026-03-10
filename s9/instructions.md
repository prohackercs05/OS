# Slip 9

## Questions

**Q.1** Resource-Request algorithm (Safety check) with specific snapshot.
P0(0,0,1,2, max 0,0,1,2), P1(1,0,0,0, max 1,7,5,0), P2(1,3,5,4, max 2,3,5,6), P3(0,6,3,2, max 0,6,5,2), P4(0,0,1,4, max 0,6,5,6). Available: 1,5,2,0.

**Q.2** LOOK disk scheduling. Requests: 176, 79, 34, 60, 92, 11, 41, 114. Head: 65, Direction: Left.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Safety Check

- Similar to Slip 7, it verifies if resources can be allocated without causing deadlock.

### Program 2: LOOK Algorithm

- LOOK is an enhanced version of SCAN.
- It only goes until the last request in that direction, then reverses, instead of going to the very end of the disk (0 or max).
- It saves head movements when requests aren't at the disk edges.
