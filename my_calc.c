#include <stdlib.h>
#include <stdio.h>
int st[99];
int k=0;
void test(char h){ /*oprazii dla calc*/
    if (h=='+'){
        push(pop()+pop());}
    if (h=='-'){
        int pop2=pop();
        push (pop()-pop2);}
    if (h=='/'){
        int pop2=pop();
        if (pop2!=0.0)
            push(pop() / pop2);
        else
            printf(" delit nelzya");}
    if (h=='*'){
        push (pop()*pop());}
}
void push(int x){ /*funkzia* push*/
    if (k<=99){
        st[k]=x;
        k++;
    }
    else{
        printf("stak full\n");
    }

}
int pop() /*funkzia pop*/
{
 return st[--k];

}

int main()
{
    int x;
    char h;
    while ((x=getchar())!='='){
        if (x>='0' && x<='9')
            push(x-'0');

        if (x=='+'||x=='-'||x=='/'||x=='*')
        {
            h=x;
            test(h);
        }
    }
    printf("%d",pop());

    return 0;
}
