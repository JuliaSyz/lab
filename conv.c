#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float c(float t){
    if (t<-273)
        printf("nedopustimoe zhach c");
    else
        printf("F=%.2f""\nK=%.2f",(t*1.8+32),t+273.15,"\n");
        }
float f(float t){
    if (t<-454)
        printf("nedopustimoe zhach f");
    else
        printf("C=%.2f""\nK=%.2f",(t-32)/1.8,((t-32)/1.8)+273.15,"\n");
}
float k(float t){
    if (t<0)
        printf("nedopustimoe zhach k");
    else
        printf("C=%.2f""\nF=%.2f",(t-273.15),((t-273.15)*1.8)+32,"\n");
}
int main(){
float t;
char b;
scanf("%f%c",&t,&b);
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
return 0;
}