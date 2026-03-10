# Slip 15

## Questions

**Q.1** Linked file allocation method simulation.

**Q.2** C-SCAN disk scheduling. Requests: 80, 150, 60, 135, 40, 35, 170. Head: 70, Direction: Right.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Linked Allocation

- This method avoids the external fragmentation problem of contiguous allocation by using pointers to link blocks together.

### Program 2: C-SCAN

- After moving to the end of the disk, the head jumps to the opposite end (0) and begins scanning in the same direction again.
