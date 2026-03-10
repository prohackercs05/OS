# Slip 18

## Questions

**Q.1** Indexed file allocation simulation. Menu: Bit Vector, Create New File, Show Directory, Delete File, Exit.

**Q.2** SCAN disk scheduling. Requests: 33, 99, 142, 52, 197, 79, 46, 65. Head: 72, Direction: Right.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Indexed Allocation

- Provides a direct access to any block of the file without traversing a link list.
- All pointers are brought together in one location: the index block.

### Program 2: SCAN

- In SCAN (Right), the head moves from 72 towards the maximum block. After reaching it, it reverses and services the remaining requests while moving towards 0.
