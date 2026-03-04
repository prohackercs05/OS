#include <stdio.h>

int main() {
    int n=5, r=4;
    int alloc[5][4] = {{0,0,1,2}, {1,0,0,0}, {1,3,5,4}, {0,6,3,2}, {0,0,1,4}};
    int max[5][4] = {{0,0,1,2}, {1,7,5,0}, {2,3,5,6}, {0,6,5,2}, {0,6,5,6}};
    int avail[4] = {1,5,2,0};
    int need[5][4], i, j, k;

    // Calculate Need Matrix
    printf("Need Matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<r; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    int finish[5] = {0}, safeSeq[5], ind = 0;
    for (k = 0; k < 5; k++) {
        for (i = 0; i < n; i++) {
            if (finish[i] == 0) {
                int flag = 0;
                for (j = 0; j < r; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    safeSeq[ind++] = i;
                    for (int y = 0; y < r; y++) avail[y] += alloc[i][y];
                    finish[i] = 1;
                }
            }
        }
    }

    int flag = 1;
    for(i=0; i<n; i++) if(finish[i]==0) flag=0;

    if(flag==1) {
        printf("System is in Safe State.\nSafe Sequence: ");
        for (i = 0; i < n - 1; i++) printf("P%d -> ", safeSeq[i]);
        printf("P%d\n", safeSeq[n - 1]);
    } else {
        printf("System is NOT in Safe State!\n");
    }

    return 0;
}
