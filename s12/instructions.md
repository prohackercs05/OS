# Slip 12

## Questions

**Q.1** MPI program to calculate sum and average of randomly generated 1000 numbers on a cluster.

**Q.2** C-LOOK disk scheduling. Requests: 23, 89, 132, 42, 187, 69, 36, 55. Head: 40, Direction: Right.

## How to Run

1. `mpicc program1.c -o program1` -> `mpirun -np 4 ./program1`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: MPI Sum & Average

- Leverages the power of multiple CPUs to handle large datasets (1000 numbers).
- Parallelization makes the computation faster.

### Program 2: C-LOOK (Circular LOOK)

- Similar to C-SCAN, it returns to the start immediately after finishing one direction.
- However, LOOK/C-LOOK only traverse until the last request in each direction instead of the disk boundaries (0 or Max).
- This is the most efficient among the provided disk scheduling algorithms in many scenarios.
