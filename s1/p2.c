#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, total_movement = 0;
    
    printf("Enter total number of disk requests: ");
    scanf("%d", &n);
    
    int requests[n];
    printf("Enter the request string: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }
    
    printf("Enter initial head position: ");
    scanf("%d", &head);
    
    printf("\nOrder of service: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", requests[i]);
        total_movement += abs(requests[i] - head);
        head = requests[i];
    }
    
    printf("\nTotal head movements: %d\n", total_movement);
    
    return 0;
}
