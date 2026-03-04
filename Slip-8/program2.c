#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, i, total = 0;
    printf("Enter num requests and head: ");
    scanf("%d %d", &n, &head);
    int req[n], visited[n];
    printf("Enter requests: ");
    for(i=0; i<n; i++) { scanf("%d", &req[i]); visited[i]=0; }

    printf("Order: ");
    for(int k=0; k<n; k++) {
        int min=9999, index=-1;
        for(i=0; i<n; i++) {
            if(!visited[i]) {
                int dist = abs(req[i]-head);
                if(dist < min) { min=dist; index=i; }
            }
        }
        visited[index]=1;
        total += min;
        head = req[index];
        printf("%d ", head);
    }
    printf("\nTotal movement: %d\n", total);
    return 0;
}
