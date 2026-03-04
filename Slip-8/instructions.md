# Slip 8

## Questions

**Q.1** Contiguous (Sequential) file allocation simulation. Menu: Show Bit Vector, Create New File, Show Directory, Exit.

**Q.2** SSTF disk scheduling. Requests: 186, 89, 44, 70, 102, 22, 51, 124. Head: 70.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Contiguous Allocation

- A file is stored in a set of contiguous blocks on the disk.
- To create a file, we look for a sequence of free blocks of the required length.
- Pros: Fast access (simple to calculate block addresses).
- Cons: Causes external fragmentation.

### Program 2: SSTF (Shortest Seek Time First)

- Selects the request with the minimum seek time from the current head position.
- It reduces total seek time compared to FCFS but can lead to starvation for some requests.
- It always picks the closest request in the queue.
