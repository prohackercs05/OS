# Slip 29

## Questions

**Q.1** MPI program to calculate sum of all even randomly generated 1000 numbers on a cluster.

**Q.2** C-LOOK disk scheduling. Requests: 80, 150, 60, 135, 40, 35, 170. Starting head: 70, Direction: Right.

## How to Run

1. `mpicc program1.c -o program1` -> `mpirun -np 4 ./program1`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: MPI Even Sum

- Parallelly sums all even numbers in a large set.

### Program 2: C-LOOK (Right)

- Starts at 70, moves Right to the largest request, then jumps directly to the smallest request to continue moving Right.
