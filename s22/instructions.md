# Slip 22

## Questions

**Q.1** MPI program to calculate sum of all odd randomly generated 1000 numbers on a cluster.

**Q.2** Sequential (Contiguous) file allocation. Menu: Show Bit Vector, Delete already created file, Exit.

## How to Run

1. `mpicc program1.c -o program1` -> `mpirun -np 4 ./program1`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: MPI Odd Sum

- Similar to Even Sum, but uses condition `n % 2 != 0`.

### Program 2: Contiguous Allocation (Delete)

- Contiguous allocation stores files in adjacent blocks. Deleting frees up these specific blocks in the bit vector.
