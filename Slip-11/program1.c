#include <stdio.h>

int main() {
    int n=5, r=3;
    int alloc[5][3] = {{0,1,0}, {2,0,0}, {3,0,3}, {2,1,1}, {0,0,2}};
    int max[5][3] = {{0,0,0}, {2,0,2}, {0,0,0}, {1,0,0}, {0,0,2}};
    int avail[3], i, j;

    while(1) {
        printf("\na.Accept Avail\nb.Display\nc.Need\nd.Avail\ne.Exit\nChoice: ");
        char ch; scanf(" %c", &ch);
        if(ch=='a') { printf("Enter available: "); for(j=0; j<r; j++) scanf("%d", &avail[j]); }
        else if(ch=='b') {
            for(i=0; i<n; i++) {
                for(j=0; j<r; j++) printf("%d ", alloc[i][j]);
                printf("| ");
                for(j=0; j<r; j++) printf("%d ", max[i][j]); printf("\n");
            }
        } else if(ch=='c') {
            for(i=0; i<n; i++) {
                for(j=0; j<r; j++) printf("%d ", max[i][j]-alloc[i][j]);
                printf("\n");
            }
        } else if(ch=='d') { for(j=0; j<r; j++) printf("%d ", avail[j]); printf("\n"); }
        else if(ch=='e') break;
    }
    return 0;
}
