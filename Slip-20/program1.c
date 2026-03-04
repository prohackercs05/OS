#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int max, n, head, i, total=0, dir;
    printf("Enter max blocks, num requests, head: ");
    scanf("%d %d %d", &max, &n, &head);
    int req[n+3]; printf("Enter requests: ");
    for(i=0; i<n; i++) scanf("%d", &req[i]);
    printf("Direction (1 for Right, 0 for Left): ");
    scanf("%d", &dir);
    
    req[n]=head; req[n+1]=0; req[n+2]=max-1;
    sort(req, n+3);
    int pos; for(i=0; i<n+3; i++) if(req[i]==head) { pos=i; break; }

    printf("Order: ");
    if(dir==1) {
        for(i=pos+1; i<n+3; i++) { printf("%d ", req[i]); total += abs(req[i]-head); head=req[i]; }
        for(i=pos-1; i>=0; i--) { if(req[i]==max-1) continue; printf("%d ", req[i]); total += abs(req[i]-head); head=req[i]; }
    } else {
        for(i=pos-1; i>=0; i--) { printf("%d ", req[i]); total += abs(req[i]-head); head=req[i]; }
        for(i=pos+1; i<n+3; i++) { if(req[i]==0) continue; printf("%d ", req[i]); total += abs(req[i]-head); head=req[i]; }
    }
    printf("\nTotal movement: %d\n", total);
    return 0;
}
