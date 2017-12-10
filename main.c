#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char* argv[]){
    int fsize=0;
    FILE *f;
    char c;
    if (argc==1) {
        printf("The file name is not specified\n");
    }
    else{
        if((f=fopen(argv[1],"r"))!=NULL) {
            while ((c=fgetc(f)) != EOF){
                printf("%c", c);
                fsize++;
            }
            printf("\n size file %d", fsize);
        }
        else{
            printf("can't open file");
            return 1;
        }
    }
return 0;
}
