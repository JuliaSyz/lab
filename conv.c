#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/*---------------------------------------------------------------------------converting for cel*/
void c(float t){
    if (t<-273)
        printf("impossible temperature c");
    else
        printf("F=%.2f\n""K=%.2f\n",(t*1.8+32),t+273.15);
        }
/*---------------------------------------------------------------------------converting for far*/
void f(float t){
    if (t<-454)
        printf("impossible temperature f");
    else
        printf("C=%.2f""\nK=%.2f\n",(t-32)/1.8,((t-32)/1.8)+273.15);
}
/*----------------------------------------------------------------------------converting for kel*/
void k(float t){
    if (t<0)
        printf("impossible temperature k");
    else
        printf("C=%.2f""\nF=%.2f\n",(t-273.15),((t-273.15)*1.8)+32);
}
int main(int argc, char* argv[]){
    float t;
    if (argc==1)/*------------------------------------------------------------no input temperature*/
        printf("no temperature");
    else
    {
        t=atof(argv[1]);
        if (argc==3){/*--------------------------------------------------------temperature and scale*/
            if (strcmp(argv[2], "C")==0 || strcmp(argv[2], "c")==0)
                c(t);
            if (strcmp(argv[2], "F")==0 || strcmp(argv[2], "f")==0)
                f(t);
            if (strcmp(argv[2], "K")==0 || strcmp(argv[2], "k")==0)
                k(t);
        }
        else{/*---------------------------------------------------------------------only temperature*/
            printf("\nC=%.2f\n",t);
            c(t);
            printf("\nF=%.2f\n",t);
            f(t);
            printf("\nK=%.2f\n",t);
            k(t);
        }
    }
return 0;
}
