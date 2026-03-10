# Slip 6

## Questions

**Q.1** Linked file allocation simulation. Menu: Bit Vector, Create New File, Show Directory, Exit.

**Q.2** C-SCAN disk scheduling. Requests: 80, 150, 60, 135, 40, 35, 170. Head: 70, Direction: Right.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Linked Allocation

- Files are stored as a linked list of blocks.
- This program uses a `struct Block` to store block numbers and pointers to the next block.

### Program 2: C-SCAN (Circular SCAN)

- Similar to SCAN, but when the head reaches the end of the disk, it immediately returns to the beginning (0) without servicing any requests on the return trip.
- It provides a more uniform wait time than SCAN.
