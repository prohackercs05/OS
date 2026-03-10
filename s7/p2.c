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
    int max, n, head, i, total=0;
    printf("Enter max blocks, num requests, head: ");
    scanf("%d %d %d", &max, &n, &head);
    int req[n+2], pos;
    printf("Enter requests: ");
    for(i=0; i<n; i++) scanf("%d", &req[i]);
    
    req[n]=head; req[n+1]=max-1;
    sort(req, n+2);
    for(i=0; i<n+2; i++) if(req[i]==head) { pos=i; break; }

    printf("Order: ");
    
    for(i=pos+1; i<n+2; i++) {
        printf("%d ", req[i]);
        total += abs(req[i]-head);
        head = req[i];
    }
    for(i=pos-1; i>=0; i--) {
        printf("%d ", req[i]);
        total += abs(req[i]-head);
        head = req[i];
    }
    printf("\nTotal movement: %d\n", total);
    return 0;
}
