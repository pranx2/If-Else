#include<stdio.h>
int main () {
    //Age condition->code by PRANTO;

    int age;
    printf("Input the age : ");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("Adult \n");

    }
    else if(age > 13 && age< 18 ) 
    {
        printf("Teenager \n");

    }
    else{
        printf("Child \n");
    }
        printf("Thank you");
    return 0;
}