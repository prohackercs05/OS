#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, total=0;
    printf("Enter number of requests: "); scanf("%d", &n);
    int req[n]; printf("Enter requests: ");
    for(int i=0; i<n; i++) scanf("%d", &req[i]);
    printf("Enter starting head: "); scanf("%d", &head);
    printf("Order: ");
    for(int i=0; i<n; i++) {
        printf("%d ", req[i]);
        total += abs(req[i]-head);
        head = req[i];
    }
    printf("\nTotal head movement: %d\n", total);
    return 0;
}
