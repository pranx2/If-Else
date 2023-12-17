#include<stdio.h>
int main (){
    int year;
    printf("Input the year:");
    scanf("%d",&year);
    //Formula;
    //Code by [PRANTO]
    if ((year % 4 == 0) || ((year % 400 == 0 ) && (year %100!=0)))
    {
        printf("The Year is leap year");
    }
    else {printf("The year is not leap year.");}
    return 0;
}