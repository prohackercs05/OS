# Slip 10

## Questions

**Q.1** MPI program to calculate sum and average of 1000 numbers on a cluster.

**Q.2** C-SCAN disk scheduling. Requests: 33, 99, 142, 52, 197, 79, 46, 65. Head: 72, Direction: Left.

## How to Run

1. `mpicc program1.c -o program1` -> `mpirun -np 4 ./program1`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: MPI Sum & Average

- Divides 1000 numbers among multiple processes.
- Each process computes a local sum.
- `MPI_Reduce` combines local sums into a total sum.
- Rank 0 prints the final sum and average.

### Program 2: C-SCAN (Left)

- Starts at 72, moves Left towards 0.
- Reaches 0, then jumps back to the maximum disk block and continues moving Left.
- This creates a circular service pattern.
