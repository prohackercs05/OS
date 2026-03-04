# Slip 19

## Questions

**Q.1** Banker’s Algorithm safety check. 6 processes (P0-P5). Resources A, B, C, D.
Allocation: P0(0,3,2,4), P1(1,2,0,1), P2(0,0,0,0), P3(3,3,2,2), P4(1,4,3,2), P5(2,4,1,4).
Max: P0(6,5,4,4), P1(4,4,4,4), P2(0,0,1,2), P3(3,9,3,4), P4(2,5,3,3), P5(4,6,3,4).
Available: 3,4,4,2.

**Q.2** C-SCAN disk scheduling. Requests: 23, 89, 132, 42, 187, 69, 36, 55. Head: 40, Direction: Left.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Safety State (P0-P5)

- Larger snapshot but same principle. We iterate through processes to see if their remaining resource needs (Need Matrix) can be satisfied by what's currently available.

### Program 2: C-SCAN (Left)

- Starts at 40 and moves towards 0. After hitting 0, it wraps around to the maximum disk block and continues moving in the same direction.
- This provides a more consistent response time than SCAN because the head always moves in one direction relative to the queue wrap.
