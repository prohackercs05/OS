# Slip 20

## Questions

**Q.1** SCAN disk scheduling with User defined direction. Requests: 33, 99, 142, 52, 197, 79, 46, 65. Head: 72.

**Q.2** MPI program to find the max number from randomly generated 1000 numbers on a cluster (Use `MPI_Reduce`).

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: SCAN (User Defined)

- The user can choose to start moving Right (towards 199/Max) or Left (towards 0).
- The algorithm behaves accordingly, reaching the edge and then reversing.

### Program 2: MPI Max

- This program uses parallel reduction. Each process identifies its local maximum, which is then compared globally using the `MPI_MAX` operation.
