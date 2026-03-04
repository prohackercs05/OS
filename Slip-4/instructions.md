# Slip 4

## Questions

**Q.1** Implement Menu driven Banker's algorithm. Total resources: A=7, B=2, C=6.
Snapshot:

- Allocation: P0(0,1,0), P1(4,0,0), P2(5,0,4), P3(4,3,3), P4(2,2,4)
- Max (Request): P0(0,0,0), P1(5,2,2), P2(1,0,4), P3(4,4,4), P4(6,5,5)
  Options: Accept Available, Display Alloc/Max, Find Need, Display Available.

**Q.2** Write a simulation program for disk scheduling using SCAN algorithm.
Requests: 86, 147, 91, 170, 95, 130, 102, 70. Head: 125, Direction: Left.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Banker's Algorithm

- This variation calculates the Current Available resources by subtracting the total allocation from the given total resource counts (7, 2, 6).
- **Need Matrix**: Calculated as `Request - Allocation`.

### Program 2: SCAN Algorithm

- Also known as the **Elevator Algorithm**.
- The head starts at 125 and moves towards the specified direction (Left -> towards 0).
- It services all requests in its path until it reaches the end (0), then reverses and services remaining requests.
- This reduces starvation compared to FCFS.
