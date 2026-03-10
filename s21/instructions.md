# Slip 21

## Questions

**Q.1** FCFS disk scheduling simulation. Requests: 55, 58, 39, 18, 90, 160, 150, 38, 184. Head: 50.

**Q.2** MPI program to calculate sum of all even randomly generated 1000 numbers on a cluster.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: FCFS Disk Scheduling

- The simplest disk scheduling algorithm. It processes IO requests in the order they arrive.
- Easy to implement but does not optimize head movement.

### Program 2: MPI Even Sum

- Each process filters its portion of the array to find even numbers (`n % 2 == 0`).
- It sums only these even numbers and sends the local sum to the root process via reduction.
- This shows how parallel processing can include conditional logic.
