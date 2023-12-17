#include<stdio.h>
int main (){
/////////Write a program to check students pass or fail results;
////////CODE BY ->[PRANTO];
    float results;
    printf("Input the result (0-100):");
    scanf("%f",&results);
//USING TERNARY FORMULA->
    
        if (results > 100) {
            printf("Input the valid number. \n");
        } else {
    results >= 30   ? printf("Congratulations! The student has been passed.\n total marks is : %0.0f \n ",results):
        printf("Sorry! The student has been failed.\n Total mark is : %0.0f \n",results);
    
        }
    printf("<!Develop by PRANTO!>");  
    
    return 0;
}