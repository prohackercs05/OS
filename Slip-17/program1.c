#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct File {
    char name[20];
    int index_block;
    int blocks[10];
    int size;
};

int main() {
    int n, i, j, ch;
    printf("Enter num blocks: "); scanf("%d", &n);
    int bit[n]; for(i=0; i<n; i++) bit[i]=0;
    struct File dir[10]; int count=0;

    while(1) {
        printf("\n1.Bit Vector\n2.Directory\n3.Delete\n4.Exit\nChoice: ");
        scanf("%d", &ch);
        if(ch==1) { for(i=0; i<n; i++) printf("%d ", bit[i]); printf("\n"); }
        else if(ch==2) {
            for(i=0; i<count; i++) {
                if(dir[i].size > 0) {
                    printf("%s (Index: %d): ", dir[i].name, dir[i].index_block);
                    for(j=0; j<dir[i].size; j++) printf("%d ", dir[i].blocks[j]);
                    printf("\n");
                }
            }
        } else if(ch==3) {
            printf("Name: "); char name[20]; scanf("%s", name);
            for(i=0; i<count; i++) if(strcmp(dir[i].name, name)==0) {
                bit[dir[i].index_block]=0;
                for(j=0; j<dir[i].size; j++) bit[dir[i].blocks[j]]=0;
                dir[i].size=0; printf("Deleted.\n"); break;
            }
        } else break;
    }
    return 0;
}
