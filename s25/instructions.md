# Slip 25

## Questions

**Q.1** LOOK disk scheduling with User Defined direction. Requests: 86, 147, 91, 170, 95, 130, 102, 70. Starting head: 125.

**Q.2** Linked file allocation simulation. Menu: Show Bit Vector, Create New File, Show Directory, Exit.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: LOOK (User Defined)

- LOOK moves until the last request in a direction and then reverses. It's more efficient than SCAN as it doesn't visit the extreme disk edges unless requested.

### Program 2: Linked Allocation

- This program simulates how files are stored using a linked sequence of disk blocks, shown using pointers in C.
