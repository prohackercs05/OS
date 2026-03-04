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
        printf("\n1.Bit Vector\n2.Create\n3.Directory\n4.Delete\n5.Exit\nChoice: ");
        scanf("%d", &ch);
        if(ch==1) { for(i=0; i<n; i++) printf("%d ", bit[i]); printf("\n"); }
        else if(ch==2) {
            printf("Name, Index Block, Size: "); 
            scanf("%s %d %d", dir[count].name, &dir[count].index_block, &dir[count].size);
            if(bit[dir[count].index_block]==1) { printf("Index block busy!\n"); continue; }
            bit[dir[count].index_block]=1;
            printf("Enter %d blocks: ", dir[count].size);
            for(j=0; j<dir[count].size; j++) { scanf("%d", &dir[count].blocks[j]); bit[dir[count].blocks[j]]=1; }
            count++; printf("Created.\n");
        } else if(ch==3) {
            for(i=0; i<count; i++) if(dir[i].size > 0) printf("%s (Index %d)\n", dir[i].name, dir[i].index_block);
        } else if(ch==4) {
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
