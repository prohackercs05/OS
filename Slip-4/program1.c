#include <stdio.h>

int main() {
    int n=5, r=3;
    int alloc[5][3] = {{0,1,0}, {4,0,0}, {5,0,4}, {4,3,3}, {2,2,4}};
    int request[5][3] = {{0,0,0}, {5,2,2}, {1,0,4}, {4,4,4}, {6,5,5}}; // Using request as 'max' for calculation in this variation
    int avail[3] = {7, 2, 6}; // Total instances given. Need to calculate current available.
    int i, j;
    
    // Calculate current available
    int sum_alloc[3] = {0,0,0};
    for(i=0; i<n; i++)
        for(j=0; j<r; j++)
            sum_alloc[j] += alloc[i][j];
            
    for(j=0; j<r; j++)
        avail[j] = avail[j] - sum_alloc[j];

    int need[5][3];
    while(1) {
        printf("\n--- Banker's Menu (Slip 4) ---");
        printf("\na) Accept Available (Calculated)");
        printf("\nb) Display Allocation and Request");
        printf("\nc) Find Need and Display");
        printf("\nd) Display Available");
        printf("\ne) Exit");
        printf("\nChoice: ");
        char ch;
        scanf(" %c", &ch);

        if(ch == 'b') {
            printf("\nProc\tAlloc\tRequest\n");
            for(i=0; i<n; i++) {
                printf("P%d\t", i);
                for(j=0; j<r; j++) printf("%d ", alloc[i][j]);
                printf("\t");
                for(j=0; j<r; j++) printf("%d ", request[i][j]);
                printf("\n");
            }
        } else if(ch == 'c') {
            printf("\nNeed Matrix (Request - Allocation):\n");
            for(i=0; i<n; i++) {
                printf("P%d\t", i);
                for(j=0; j<r; j++) {
                    need[i][j] = request[i][j] - alloc[i][j];
                    if(need[i][j] < 0) need[i][j] = 0; // Request can't be less than alloc in some contexts
                    printf("%d ", need[i][j]);
                }
                printf("\n");
            }
        } else if(ch == 'd') {
            printf("\nAvailable: ");
            for(j=0; j<r; j++) printf("%d ", avail[j]);
            printf("\n");
        } else if(ch == 'e') break;
    }
    return 0;
}
