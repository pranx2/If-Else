#include<stdio.h>
//Input the unit and found out  the electricity bill
//Code by [PRAN];
int main (){
    float unit,bill;
    char plus,percent;
    plus = '+';
    percent = '%';
    printf("Input the electricity Unit :");
    scanf("%f", & unit);
    
    if (unit <= 50)
    {
        bill =(0.50 *unit) + 0.2;
        printf("Electricity bill is : %f RS \n",bill);
        printf("1 unit  = 0.50 RS ");
    }
    else if (unit <= 100)
    {
        bill =(0.75 * unit) + 0.2;
        printf("Electricity bill is : %f RS \n",bill);
        printf("1 unit  = 0.75 RS ");
    }
    else if (unit > 100)
    {
        bill =(1.20 * unit) + 0.2;
        printf("Electricity bill is : %f RS \n",bill);
        printf("1 unit  = 1.20 RS ");
    }
    else if (unit > 250)
    {
        bill =(1.5 * unit) + 0.2 ;
        printf("Electricity bill is : %f RS\n",bill);
        printf("1 unit  = 1.50 RS"); 
    }
        printf("%c 20 %c vat",plus,percent);
    return 0;   
}