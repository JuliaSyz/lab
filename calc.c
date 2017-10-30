#include <stdlib.h>
#include <stdio.h>
float st[99];
int k=0;
void push(float x){
    st[k]=x;
    k++;
}
float pop(){
 return st[--k];
}
int main(int argc, char* argv[]){
    float x;
    int i;
    for (i=1; i<argc;i++){
        if (argv[i][0]=='+'||argv[i][0]=='-'||argv[i][0]=='/'||argv[i][0]=='x'||argv[i][0]=='X'){
            if (argv[i][0]=='+'){
                push(pop()+pop());}
            if (argv[i][0]=='-'){
                int pop2=pop();
                push (pop()-pop2);}
            if (argv[i][0]=='/'){
                int pop2=pop();
                if (pop2!=0.0)
                    push(pop()/pop2);
                else
                    printf("can not be dividedcan not be divided");}
            if (argv[i][0]=='x' || argv[i][0]=='X'){
                push (pop()*pop());}
        }
        else{
            x=atof(argv[i]);
            push(x);
        }

    }
    printf("%f",pop());
    return 0;
}
