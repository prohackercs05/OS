# Slip 1

## Questions

**Q.1** Write a C Menu driven Program to implement Banker's algorithm functionality:
a) Accept Available
b) Display Allocation, Max
c) Display the contents of need matrix
d) Display Available

**Q.2** Write a simulation program for disk scheduling using FCFS algorithm. Accept total number of disk blocks, disk request string, and current head position from the user. Display the list of request in the order in which it is served. Also display the total number of head moments.
Test Data: 55, 58, 39, 18, 90, 160, 150, 38, 184. Start Head Position: 50

## How to Run

1. Open terminal in Ubuntu.
2. For Program 1:
   - `gedit program1.c` (to view/edit)
   - `cc program1.c`
   - `./a.out`
3. For Program 2:
   - `gedit program2.c`
   - `cc program2.c`
   - `./a.out`

## Explanation

### Program 1: Banker's Algorithm (Menu Driven)

- This program manages resource allocation to processes.
- **Allocation Matrix**: Shows resources currently held by each process.
- **Max Matrix**: Shows maximum resources required by each process.
- **Need Matrix**: Calculated as `Max - Allocation`. It represents remaining resources needed.
- **Available**: Resources currently free in the system.
- The menu allows users to input data and visualize these matrices.

### Program 2: FCFS Disk Scheduling

- **FCFS (First Come First Served)**: The simplest disk scheduling algorithm.
- It services requests in the exact order they arrive in the queue.
- **Head Movements**: Calculated as the absolute difference between the current head position and the target request position.
- It is fair but doesn't optimize seek time.
