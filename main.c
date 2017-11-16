#include <stdio.h>
#include <stdlib.h>
int c[8];
void arrio()
{
    int i, k=0;
    char x;
    for (i=0;i<10;i++){
        x = getchar();
        if (x>='0' && x<='9'){
            c[k]=x-'0';
            k++;
        }
    }
}
int main(int argc, char* argv[])
{
    printf("DD.MM.YYYY\n");
    arrio();
    int date, month, year;
    if (argc>1)
    {
            printf("%c","incorrect");
        }
    if (argc==1)
    {
            year=c[4]*1000+c[5]*100+c[6]*10+c[7];
            month=c[2]*10+c[3];
            date=c[0]*10+c[1];
            int f=0;
            if ((year%4==0 && year%100!=0) || year%400==0)
                f=1;
            if (year<1582 && month<=10 && date<4)
                printf("not calendar");
            else{
                if (month>=1 && month<13 && date>=1)
                {
                if ((((month==4 || month==6 || month==9 || month==11) && date<31)||(month==2 && ((f==1 && date<30)||(f==0 && date<29))) ) || (month!=4 && month!=6 && month!=9 && month!=11))
                    {
                    int k_month, k_year, day;
                    switch (month)
                    {
                        case 1:
                        case 10:
                            k_month=1;
                            break;
                        case 5:
                            k_month=2;
                            break;
                        case 8:
                            k_month=3;
                            break;
                        case 2:
                        case 3:
                        case 11:
                            k_month=4;
                            break;
                        case 6:
                            k_month=5;
                            break;
                        case 12:
                        case 9:
                            k_month=6;
                            break;
                        case 4:
                        case 7:
                            k_month=0;
                            break;
                    }
                    if (year/100==0 || year/100%4==0)
                        k_year=6;
                    else if (year/100%4==1)
                        k_year=4;
                    else if (year/100%4==1)
                        k_year=2;
                    k_year=(k_year+year%100+(year%100)/4)%7;

                    day=(date+k_month+k_year)%7;
                    if (f==1)
                    {
                        if (month<3){
                            if (day==6)
                                day=0;
                            else

                                day++;
                        }
                    }

                    switch (day){
                        case 0:
                            printf("Saturday");
                            break;
                        case 1:
                            printf("Sunday");
                            break;
                        case 2:
                            printf("Monday");
                            break;
                        case 5:
                            printf("Thursday");
                            break;
                        case 4:
                            printf("Wednesday");
                            break;
                        case 3:
                            printf("Tuesday");
                            break;
                        case 6:
                            printf("Friday");
                            break;
                        }
                }
                else
                    printf("incorrect date");
            }
            else
                    printf("incorrect date");
            }

    }
    return 0;
}
