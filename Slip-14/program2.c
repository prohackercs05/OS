#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, i, total=0;
    printf("Enter num requests and head: ");
    scanf("%d %d", &n, &head);
    int req[n], visited[n];
    for(i=0; i<n; i++) { scanf("%d", &req[i]); visited[i]=0; }
    printf("Order: ");
    for(int k=0; k<n; k++) {
        int min=9999, idx=-1;
        for(i=0; i<n; i++) if(!visited[i] && abs(req[i]-head) < min) { min=abs(req[i]-head); idx=i; }
        visited[idx]=1; total += min; head = req[idx]; printf("%d ", head);
    }
    printf("\nTotal movement: %d\n", total);
    return 0;
}
