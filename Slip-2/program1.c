#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Block {
    int block_no;
    struct Block *next;
};

struct File {
    char name[20];
    struct Block *start;
};

int main() {
    int n, i, ch;
    printf("Enter number of blocks: ");
    scanf("%d", &n);

    int bit_vector[n];
    for (i = 0; i < n; i++) bit_vector[i] = 0; // 0 for free

    // Randomly allocate some blocks
    srand(time(NULL));
    for (i = 0; i < n / 4; i++) {
        bit_vector[rand() % n] = 1;
    }

    struct File directory[10];
    int file_count = 0;

    while (1) {
        printf("\n--- Linked Allocation Menu ---");
        printf("\n1. Show Bit Vector");
        printf("\n2. Create New File");
        printf("\n3. Show Directory");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            for (i = 0; i < n; i++) printf("%d ", bit_vector[i]);
            printf("\n");
        } else if (ch == 2) {
            printf("Enter file name: ");
            scanf("%s", directory[file_count].name);
            printf("Enter number of blocks: ");
            int needed;
            scanf("%d", &needed);

            struct Block *temp = NULL, *last = NULL;
            int found = 0;
            for (i = 0; i < n && found < needed; i++) {
                if (bit_vector[i] == 0) {
                    struct Block *new_node = (struct Block *)malloc(sizeof(struct Block));
                    new_node->block_no = i;
                    new_node->next = NULL;
                    bit_vector[i] = 1;
                    if (temp == NULL) temp = new_node;
                    else last->next = new_node;
                    last = new_node;
                    found++;
                }
            }
            if (found < needed) {
                printf("Not enough blocks!\n");
            } else {
                directory[file_count].start = temp;
                file_count++;
                printf("File created successfully.\n");
            }
        } else if (ch == 3) {
            for (i = 0; i < file_count; i++) {
                printf("File: %s, Blocks: ", directory[i].name);
                struct Block *curr = directory[i].start;
                while (curr) {
                    printf("%d -> ", curr->block_no);
                    curr = curr->next;
                }
                printf("NULL\n");
            }
        } else if (ch == 4) break;
    }
    return 0;
}
