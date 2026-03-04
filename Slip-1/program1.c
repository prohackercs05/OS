#include <stdio.h>

int main() {
    int n, r;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resource types: ");
    scanf("%d", &r);

    int allocation[n][r], max[n][r], need[n][r], available[r];
    int i, j, ch;

    while (1) { 
        printf("\n--- Banker's Algorithm Menu ---");
        printf("\na) Accept Available");
        printf("\nb) Display Allocation and Max");
        printf("\nc) Display Need Matrix");
        printf("\nd) Display Available");
        printf("\ne) Exit");
        printf("\nEnter your choice: ");
        char choice;
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter Allocation Matrix:\n");
                for (i = 0; i < n; i++)
                    for (j = 0; j < r; j++)
                        scanf("%d", &allocation[i][j]);

                printf("Enter Max Matrix:\n");
                for (i = 0; i < n; i++)
                    for (j = 0; j < r; j++)
                        scanf("%d", &max[i][j]);

                printf("Enter Available Resources: ");
                for (j = 0; j < r; j++)
                    scanf("%d", &available[j]);

                // Calculate Need Matrix
                for (i = 0; i < n; i++)
                    for (j = 0; j < r; j++)
                        need[i][j] = max[i][j] - allocation[i][j];
                break;

            case 'b':
                printf("\nProcess\tAllocation\tMax\n");
                for (i = 0; i < n; i++) {
                    printf("P%d\t", i);
                    for (j = 0; j < r; j++) printf("%d ", allocation[i][j]);
                    printf("\t");
                    for (j = 0; j < r; j++) printf("%d ", max[i][j]);
                    printf("\n");
                }
                break;

            case 'c':
                printf("\nNeed Matrix:\n");
                for (i = 0; i < n; i++) {
                    printf("P%d\t", i);
                    for (j = 0; j < r; j++) printf("%d ", need[i][j]);
                    printf("\n");
                }
                break;

            case 'd':
                printf("\nAvailable Resources: ");
                for (j = 0; j < r; j++) printf("%d ", available[j]);
                printf("\n");
                break;

            case 'e':
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
