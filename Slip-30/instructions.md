# Slip 30

## Questions

**Q.1** MPI program to find the minimum number from randomly generated 1000 numbers on a cluster (Use `MPI_Reduce`).

**Q.2** FCFS disk scheduling. Requests: 65, 95, 30, 91, 18, 116, 142, 44, 168. Starting Head: 52.

## How to Run

1. `mpicc program1.c -o program1` -> `mpirun -np 4 ./program1`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: MPI Min

- Parallel searching for the minimum value.

### Program 2: FCFS

- Standard FIFO disk scheduling.
