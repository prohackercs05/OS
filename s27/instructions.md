# Slip 27

## Questions

**Q.1** LOOK disk scheduling. Requests: 176, 79, 34, 60, 92, 11, 41, 114. Starting head: 65, Direction: Right.

**Q.2** MPI program to find the minimum number from randomly generated 1000 numbers on a cluster (Use `MPI_Reduce`).

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: LOOK (Right)

- Starts at 65 and moves towards the highest request. Once finished, it reverses to service the low-end requests.

### Program 2: MPI Min

- Parallel searching for the minimum value. Each process handles a fraction of the 1000 indices.
