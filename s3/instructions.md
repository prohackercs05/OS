# Slip 3

## Questions

**Q.1** Write a C program to simulate Banker’s algorithm for deadlock avoidance.
Snapshot:

- Allocation: P0(0,0,1,2), P1(1,0,0,0), P2(1,3,5,4), P3(0,6,3,2), P4(0,0,1,4)
- Max: P0(0,0,1,2), P1(1,7,5,0), P2(2,3,5,6), P3(0,6,5,2), P4(0,6,5,6)
- Available: (1,5,2,0)
  a) Calculate Need Matrix.
  b) Check if system is in safe state and display safe sequence.

**Q.2** Write an MPI program to calculate sum and average of randomly generated 1000 numbers on a cluster.

## How to Run

1. Open terminal in Ubuntu.
2. For Program 1:
   - `cc program1.c`
   - `./a.out`
3. For Program 2:
   - `mpicc program2.c -o program2`
   - `mpirun -np 4 ./program2`

## Explanation

### Program 1: Banker's Algorithm (Safety)

- **Need Matrix**: Calculated to find out how many more resources each process might request.
- **Safety Algorithm**: It simulates the allocation process. If every process can get its maximum required resources in some order (Safe Sequence), the system is safe.
- If a process can be satisfied by current Available resources, those resources are "returned" to the Available pool after it completes.

### Program 2: MPI Sum and Average

- Similar to Slip 2, but also calculates the average.
- **MPI_Scatter**: Distributes data.
- **MPI_Reduce**: Collects results.
- **Average**: Calculated at the master process (Rank 0) by dividing total sum by count (1000).
