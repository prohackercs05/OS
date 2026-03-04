#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct File {
    char name[20];
    int start, length;
};

int main() {
    int n, i, ch;
    printf("Enter num blocks: "); scanf("%d", &n);
    int bit[n]; for(i=0; i<n; i++) bit[i]=0;
    struct File dir[10]; int count=0;

    while(1) {
        printf("\n1.Bit Vector\n2.Delete File\n3.Exit\nChoice: ");
        scanf("%d", &ch);
        if(ch==1) { for(i=0; i<n; i++) printf("%d ", bit[i]); printf("\n"); }
        else if(ch==2) {
            printf("Enter name to delete: "); char name[20]; scanf("%s", name);
            for(i=0; i<count; i++) if(strcmp(dir[i].name, name)==0 && dir[i].length > 0) {
                for(int j=dir[i].start; j < dir[i].start+dir[i].length; j++) bit[j]=0;
                dir[i].length = 0; printf("Deleted.\n"); break;
            }
        } else break;
    }
    return 0;
}
