# Slip 11

## Questions

**Q.1** Banker's Algorithm Menu: Accept Available, Display Alloc/Max, Display Need, Display Available.
Snapshot: P0(0,1,0), P1(2,0,0), P2(3,0,3), P3(2,1,1), P4(0,0,2). Max: P0(0,0,0), P1(2,0,2), P2(0,0,0), P3(1,0,0), P4(0,0,2).

**Q.2** MPI program to find the minimum number from randomly generated 1000 numbers on a cluster (Use `MPI_Reduce`).

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: Banker's Algorithm

- Manages resources and calculates the Need Matrix.
- Need Matrix is important for deadlock avoidance as it shows the potential future demands of processes.

### Program 2: MPI Min

- Each process identifies the smallest number in its local set.
- `MPI_Reduce` with `MPI_MIN` aggregates these results to find the globally smallest value.
