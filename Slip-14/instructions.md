# Slip 14

## Questions

**Q.1** Sequential (Contiguous) file allocation. Menu: Show Bit Vector, Show Directory, Delete File, Exit.

**Q.2** SSTF disk scheduling. Requests: 55, 58, 39, 18, 90, 160, 150, 38, 184. Head: 50.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Contiguous Allocation (Delete)

- Deleting a file in contiguous allocation involves setting the blocks formerly occupied by the file back to "free" (0) in the bit vector.

### Program 2: SSTF

- Always services the nearest disk request.
- This minimizes the distance the head has to travel at each step.
