#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int main(int argc, char** argv) {
    int rank, num_procs;
    int data[SIZE], local_max = -1, global_max;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
    if (rank == 0) {
        srand(time(NULL));
        for (int i = 0; i < SIZE; i++) data[i] = rand() % 10000;
    }
    int chunk = SIZE / num_procs;
    int local_data[chunk];
    MPI_Scatter(data, chunk, MPI_INT, local_data, chunk, MPI_INT, 0, MPI_COMM_WORLD);
    for (int i = 0; i < chunk; i++) if(local_data[i] > local_max) local_max = local_data[i];
    MPI_Reduce(&local_max, &global_max, 1, MPI_INT, MPI_MAX, 0, MPI_COMM_WORLD);
    if (rank == 0) printf("Maximum number: %d\n", global_max);
    MPI_Finalize();
    return 0;
}
