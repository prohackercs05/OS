#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int main(int argc, char** argv) {
    int rank, num_procs;
    int data[SIZE];
    int local_sum = 0, total_sum = 0;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);

    if (rank == 0) {
        srand(time(NULL));
        for (int i = 0; i < SIZE; i++) data[i] = rand() % 100;
    }

    
    int chunk_size = SIZE / num_procs;
    int local_data[chunk_size];
    MPI_Scatter(data, chunk_size, MPI_INT, local_data, chunk_size, MPI_INT, 0, MPI_COMM_WORLD);

    for (int i = 0; i < chunk_size; i++) local_sum += local_data[i];

    MPI_Reduce(&local_sum, &total_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        printf("Total sum of 1000 numbers is: %d\n", total_sum);
    }

    MPI_Finalize();
    return 0;
}
