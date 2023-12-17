#include<stdio.h>
int main (){
    int months_number;
    //Giving the month number and find out the month;
    printf("Input the month number,");
    printf("number must be (1-12): ");
    scanf("%d",&months_number);
    //if_else Formula->
    //Code by [PRANTO]
    if(months_number == 1 ) {
        printf("The month is january.");
    }
    else if (months_number == 2)
    {
        printf("The month is February.");
    }
    else if (months_number == 3)
    {
        printf("The month is March.");
    }
    else if (months_number == 4)
    {
        printf("The month is April.");
    }
    else if (months_number == 5)
    {
        printf("The month is May.");
    }
    else if (months_number == 6)
    {
        printf("The month is June.");
    }
    else if (months_number == 7)
    {
        printf("The month is July.");
    }
    else if (months_number == 8)
    {
        printf("The month is August.");
    }
    else if (months_number == 9)
    {
        printf("The month is September.");
    }
    else if (months_number == 10)
    {
        printf("The month is October.");
    }
    else if (months_number == 11)
    {
        printf("The month is November.");
    }
    else if (months_number == 12)
    {
        printf("The month is December.");
    }
    else {
        printf("Input the valid month number");
    }
    return 0;
}