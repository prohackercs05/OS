#include <stdio.h>

int main() {
    int n=6, r=4;
    int alloc[6][4] = {{0,3,2,4}, {1,2,0,1}, {0,0,0,0}, {3,3,2,2}, {1,4,3,2}, {2,4,1,4}};
    int max[6][4] = {{6,5,4,4}, {4,4,4,4}, {0,0,1,2}, {3,9,3,4}, {2,5,3,3}, {4,6,3,4}};
    int avail[4] = {3,4,4,2};
    int need[6][4], i, j, k;

    printf("Need Matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<r; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    int finish[6]={0}, safe[6], ind=0;
    for(k=0; k<n; k++) {
        for(i=0; i<n; i++) {
            if(!finish[i]) {
                int flag=0;
                for(j=0; j<r; j++) if(need[i][j] > avail[j]) { flag=1; break; }
                if(!flag) {
                    for(int y=0; y<r; y++) avail[y] += alloc[i][y];
                    safe[ind++] = i; finish[i]=1;
                }
            }
        }
    }

    if(ind == n) {
        printf("Safe state. Sequence: ");
        for(i=0; i<n; i++) printf("P%d ", safe[i]);
        printf("\n");
    } else printf("Not in safe state.\n");
    return 0;
}
