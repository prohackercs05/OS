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
    int n, head, max_blocks, i, total_movement = 0;
    char direction[10];

    printf("Enter total number of disk blocks: ");
    scanf("%d", &max_blocks);
    printf("Enter number of requests: ");
    scanf("%d", &n);
    int requests[n + 2], serviced[n + 2];
    printf("Enter requests: ");
    for (i = 0; i < n; i++) scanf("%d", &requests[i]);
    printf("Enter initial head position: ");
    scanf("%d", &head);

    
    requests[n] = 0;
    requests[n+1] = head;
    sort(requests, n + 2);

    int pos;
    for (i = 0; i < n + 2; i++) {
        if (requests[i] == head) {
            pos = i;
            break;
        }
    }

    printf("\nOrder of service: ");
    
    for (i = pos - 1; i >= 0; i--) {
        printf("%d ", requests[i]);
        total_movement += abs(requests[i] - head);
        head = requests[i];
    }
    
    for (i = pos + 1; i < n + 2; i++) {
        if(requests[i] == head) continue; 
        if(requests[i] == 0) continue; 
        printf("%d ", requests[i]);
        total_movement += abs(requests[i] - head);
        head = requests[i];
    }

    printf("\nTotal head movements: %d\n", total_movement);
    return 0;
}
