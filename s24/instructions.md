# Slip 24

## Questions

**Q.1** MPI program to calculate sum of all odd randomly generated 1000 numbers on a cluster.

**Q.2** Banker’s algorithm safety check. Snapshot: P0(0,1,0), P1(2,0,0), P2(3,0,3), P3(2,1,1), P4(0,0,2). Max: P0(0,0,0), P1(2,0,2), P2(0,0,0), P3(1,0,0), P4(0,0,2).

## How to Run

1. `mpicc program1.c -o program1` -> `mpirun -np 4 ./program1`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: MPI Odd Sum

- Parallelly sums odd integers from a randomly generated array.

### Program 2: Banker's Safety

- It determines if the system is in a safe state and provides the safe execution sequence for the given process resource snapshot.
