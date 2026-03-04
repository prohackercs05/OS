# Slip 28

## Questions

**Q.1** C-LOOK disk scheduling with User Defined direction. Requests: 56, 59, 40, 19, 91, 161, 151, 39, 185. Starting head: 48.

**Q.2** MPI program to calculate sum of randomly generated 1000 numbers on a cluster.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: C-LOOK (User Defined)

- Circular LOOK algorithm. It processes requests in one direction and jump-wraps around to the first request in the queue to repeat. It's more efficient than C-SCAN.

### Program 2: MPI Sum

- Standard parallel summation.
