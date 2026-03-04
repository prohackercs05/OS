# Slip 2

## Questions

**Q.1** Write a program to simulate Linked file allocation method. Assume disk with n number of blocks. Give value of n as input. Randomly mark some block as allocated and accordingly maintain the list of free blocks. Write menu driver program:

- Show Bit Vector
- Create New File
- Show Directory
- Exit

**Q.2** Write an MPI program to calculate sum of randomly generated 1000 numbers (stored in array) on a cluster.

## How to Run

1. Open terminal in Ubuntu.
2. For Program 1 (File Allocation):
   - `cc program1.c`
   - `./a.out`
3. For Program 2 (MPI Sum):
   - Note: MPI requires `libmpi-dev` installed.
   - `mpicc program2.c -o program2`
   - `mpirun -np 4 ./program2` (Runs with 4 processes)

## Explanation

### Program 1: Linked File Allocation

- **Bit Vector**: A string of 0s and 1s representing free and allocated blocks.
- **Linked Allocation**: Each file is a linked list of disk blocks. Blocks can be scattered anywhere on the disk.
- **Directory**: Stores the file name and a pointer to the first block.
- This method eliminates external fragmentation.

### Program 2: MPI Sum

- **MPI (Message Passing Interface)**: Used for parallel programming.
- **Scatter**: Rank 0 divides the 1000 numbers into chunks and sends them to other processes.
- **Local Sum**: Each process calculates the sum of its own chunk.
- **Reduce**: The `MPI_SUM` operation collects all local sums and calculates the final total at Rank 0.
