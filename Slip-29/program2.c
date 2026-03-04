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
    int n, head, i, total=0;
    printf("Enter num requests, head: ");
    scanf("%d %d", &n, &head);
    int req[n+1], pos; printf("Enter requests: ");
    for(i=0; i<n; i++) scanf("%d", &req[i]);
    
    req[n]=head; sort(req, n+1);
    for(i=0; i<n+1; i++) if(req[i]==head) { pos=i; break; }

    printf("Order: ");
    // Right for C-LOOK
    for(i=pos+1; i<n+1; i++) { printf("%d ", req[i]); total += abs(req[i]-head); head=req[i]; }
    total += abs(head - req[0]); head = req[0]; printf("%d ", head);
    for(i=1; i<pos; i++) { printf("%d ", req[i]); total += abs(req[i]-head); head=req[i]; }
    printf("\nTotal movement: %d\n", total);
    return 0;
}
