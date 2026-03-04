# Slip 5

## Questions

**Q.1** Banker's Algorithm: AcceptAllocation, Max, Available. Display Need matrix and check if a specific request from a process can be granted immediately.

**Q.2** Write an MPI program to find the max number from randomly generated 1000 numbers on a cluster (Use `MPI_Reduce`).

## How to Run

1. `cc program1.c` -> `./a.out`
2. `mpicc program2.c -o program2` -> `mpirun -np 4 ./program2`

## Explanation

### Program 1: Banker's Resource Request

- Checks if a process's request is valid using two conditions:
  1. `Request <= Need`: Process cannot request more than its declared maximum.
  2. `Request <= Available`: System must have enough resources to grant the request.
- If both are true, the request _could_ potentially be granted (further safety check is normally needed, but the question asks if it can be granted _immediately_ based on these checks).

### Program 2: MPI Max

- **MPI_MAX**: A built-in reduction operation.
- Each process finds the maximum in its own chunk of data.
- `MPI_Reduce` then compares these local maximums to find the highest value across the entire cluster.
