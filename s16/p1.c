#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct File {
    char name[20];
    int start, length;
};

int main() {
    int n, i, ch;
    printf("Enter number of disk blocks: ");
    scanf("%d", &n);
    int bit[n];
    for(i=0; i<n; i++) bit[i] = 0;
    
    srand(time(NULL));
    for(i=0; i<n/10; i++) bit[rand()%n] = 1;

    struct File dir[10];
    int count = 0;

    while(1) {
        printf("\n1.Bit Vector\n2.Create File\n3.Show Directory\n4.Exit\nChoice: ");
        scanf("%d", &ch);
        if(ch==1) {
            for(i=0; i<n; i++) printf("%d ", bit[i]);
            printf("\n");
        } else if(ch==2) {
            printf("Enter name and length: ");
            char name[20]; int len;
            scanf("%s %d", name, &len);
            int start = -1, free_count = 0;
            for(i=0; i<n; i++) {
                if(bit[i]==0) free_count++; else free_count=0;
                if(free_count == len) { start = i - len + 1; break; }
            }
            if(start != -1) {
                strcpy(dir[count].name, name);
                dir[count].start = start; dir[count].length = len;
                for(i=start; i<start+len; i++) bit[i]=1;
                count++; printf("Created.\n");
            } else printf("No contiguous space!\n");
        } else if(ch==3) {
            for(i=0; i<count; i++) printf("%s: %d (len %d)\n", dir[i].name, dir[i].start, dir[i].length);
        } else break;
    }
    return 0;
}
