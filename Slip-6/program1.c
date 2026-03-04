#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Block {
    int bno;
    struct Block *next;
};

struct File {
    char name[20];
    struct Block *start;
};

int main() {
    int n, i, ch;
    printf("Enter number of disk blocks: ");
    scanf("%d", &n);
    int bit[n];
    for(i=0; i<n; i++) bit[i] = 0;
    
    // Initial random allocation
    srand(time(NULL));
    for(i=0; i<n/5; i++) bit[rand()%n] = 1;

    struct File dir[10];
    int count = 0;

    while(1) {
        printf("\n1.Show Bit Vector\n2.Create New File\n3.Show Directory\n4.Exit\nChoice: ");
        scanf("%d", &ch);
        if(ch==1) {
            for(i=0; i<n; i++) printf("%d ", bit[i]);
            printf("\n");
        } else if(ch==2) {
            printf("Enter file name and size: ");
            scanf("%s %d", dir[count].name, &i);
            struct Block *temp=NULL, *last=NULL;
            int found=0, j;
            for(j=0; j<n && found<i; j++) {
                if(bit[j]==0) {
                    struct Block *newb = malloc(sizeof(struct Block));
                    newb->bno = j; newb->next = NULL;
                    bit[j]=1;
                    if(!temp) temp=newb; else last->next=newb;
                    last=newb; found++;
                }
            }
            if(found<i) printf("No space!\n");
            else { dir[count++].start = temp; printf("Created.\n"); }
        } else if(ch==3) {
            for(int j=0; j<count; j++) {
                printf("%s: ", dir[j].name);
                struct Block *curr = dir[j].start;
                while(curr) { printf("%d->", curr->bno); curr=curr->next; }
                printf("NULL\n");
            }
        } else break;
    }
    return 0;
}
