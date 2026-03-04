#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of processes: ");
    scanf("%d", &m);
    printf("Enter number of resource types: ");
    scanf("%d", &n);

    int alloc[m][n], max[m][n], need[m][n], avail[n];

    printf("Enter Allocation Matrix:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &alloc[i][j]);

    printf("Enter Max Matrix:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &max[i][j]);

    printf("Enter Available Resources:\n");
    for(j=0; j<n; j++)
        scanf("%d", &avail[j]);

    printf("\nNeed Matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    int p, request[n];
    printf("\nEnter process number requesting resources: ");
    scanf("%d", &p);
    printf("Enter request: ");
    for(j=0; j<n; j++) scanf("%d", &request[j]);

    int can_grant = 1;
    for(j=0; j<n; j++) {
        if(request[j] > need[p][j] || request[j] > avail[j]) {
            can_grant = 0;
            break;
        }
    }

    if(can_grant) printf("\nRequest can be granted immediately.\n");
    else printf("\nRequest CANNOT be granted immediately.\n");

    return 0;
}
