#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void c(float t){
    if (t<-273)
        printf("nedopustimoe zhach c");
    else
        printf("F=%.2f\n""K=%.2f\n",(t*1.8+32),t+273.15);
        }
void f(float t){
    if (t<-454)
        printf("nedopustimoe zhach f");
    else
        printf("C=%.2f""\nK=%.2f\n",(t-32)/1.8,((t-32)/1.8)+273.15);
}
void k(float t){
    if (t<0)
        printf("nedopustimoe zhach k");
    else
        printf("C=%.2f""\nF=%.2f\n",(t-273.15),((t-273.15)*1.8)+32);
}
int main(int argc, char* argv[]){
float t;
char b;
if (argc==1)
        printf("no temperature");
else
{
    t=atof(argv[1]);
    printf("%f",t);
    if (argc==3)
        b=argv[2];
    else
        b=' ';
    switch(b) {
        case'C':
        case'c':
            c(t);
            break;
        case'F':
        case'f':
            f(t);
            break;
        case'K':
        case'k':
            k(t);
            break;
        default:
            printf("\nC=%.2f\n",t);
            c(t);
            printf("\nF=%.2f\n",t);
            f(t);
            printf("\nK=%.2f\n",t);
            k(t);
            break;
        }
    }
return 0;
}
