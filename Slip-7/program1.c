#include <stdio.h>

int main() {
    int n=5, r=4;
    int alloc[5][4] = {{2,0,0,1}, {3,1,2,1}, {2,1,0,3}, {1,3,1,2}, {1,4,3,2}};
    int max[5][4] = {{4,2,1,2}, {5,2,5,2}, {2,3,1,6}, {1,4,2,4}, {3,6,6,5}};
    int avail[4] = {3,3,2,1};
    int need[5][4], i, j, k;

    for(i=0; i<n; i++)
        for(j=0; j<r; j++)
            need[i][j] = max[i][j] - alloc[i][j];

    int finish[5]={0}, safe[5], ind=0;
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
