# Slip 13

## Questions

**Q.1** Banker’s algorithm safety check. Snapshot: P0(0,1,0), P1(2,0,0), P2(3,0,3), P3(2,1,1), P4(0,0,2). Max: P0(0,0,0), P1(2,0,2), P2(0,0,0), P3(1,0,0), P4(0,0,2).

**Q.2** SCAN disk scheduling. Requests: 176, 79, 34, 60, 92, 11, 41, 114. Head: 65, Direction: Left.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Safety State

- Checks if the system can guarantee that all processes will eventually complete by finding a safe execution sequence.

### Program 2: SCAN (Left)

- Head moves from 65 towards 0. After hitting 0, it reverses and services remaining requests on its way back.
