# Slip 23

## Questions

**Q.1** Banker’s Algorithm: Display Need matrix and check if a specific request of a process can be granted immediately.

**Q.2** SSTF disk scheduling. Requests: 24, 90, 133, 43, 188, 70, 37, 55. Head: 58.

## How to Run

1. `cc program1.c` -> `./a.out`
2. `cc program2.c` -> `./a.out`

## Explanation

### Program 1: Banker's Request

- Verifies if the requesting process is asking for more than its limit (Need) and if the system has enough (Available) to provide it immediately.

### Program 2: SSTF

- Shortest Seek Time First. It chooses the request that results in the minimum movement of the head.
