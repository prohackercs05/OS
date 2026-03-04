# Slip 17

## Questions

**Q.1** Indexed file allocation simulation. Menu: Show Bit Vector, Show Directory, Delete File, Exit.

**Q.2** LOOK disk scheduling. Requests: 23, 89, 132, 42, 187, 69, 36, 55. Head: 40, Direction: Left.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Indexed Allocation

- Each file has its own index block, which is an array of disk-block addresses.
- The `i`-th entry in the index block points to the `i`-th block of the file.
- It supports direct access and eliminates external fragmentation.

### Program 2: LOOK

- Moves head towards requests in one direction and reverses only when there are no more requests in that direction.
- In this case, it starts at 40 and moves Left.
