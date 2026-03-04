# Slip 26

## Questions

**Q.1** Banker’s algorithm safety check. Snapshot: P0(0,0,1,2), P1(1,0,0,0), P2(1,3,5,4), P3(0,6,3,2), P4(0,0,1,4). Available: 1,5,2,0. Max: same as allocation for P0, etc...

**Q.2** FCFS disk scheduling. Requests: 56, 59, 40, 19, 91, 161, 151, 39, 185. Head: 48.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Banker's Safety

- It checks if there's an execution order that won't lead to deadlock by comparing needed resources with available ones.

### Program 2: FCFS

- Standard FIFO processing of disk requests. Simple and easy to understand but lacks optimization for seek time.
