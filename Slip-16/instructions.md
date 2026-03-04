# Slip 16

## Questions

**Q.1** Sequential (Contiguous) file allocation simulation.

**Q.2** MPI program to find the minimum number from randomly generated 1000 numbers on a cluster.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: Contiguous Allocation

- Simplest file allocation method where files are stored in linear, contiguous blocks.

### Program 2: MPI Min

- Parallel searching algorithm. Each CPU core finds the minimum in its assigned subset of numbers, and the global minimum is determined using `MPI_Reduce`.
