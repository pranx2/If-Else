#include<stdio.h>
int main() {
///////Write a program to check students pass or fail results;
//////CODE BY ->[PRANTO]
    float result;
            
    printf("Input the result (value=1-100):");
    scanf("%f",&result);
    ////USING IF_ELSE FORMULA->
    
        if(result > 100) 
        {
            printf("Input the valid marks.\n \n");
        } else { 
            if (result >= 30 && result < 40){
                printf("Congratulations! The student has been passed. \n");
            printf("Student mark is: %0.0f \n",result);
                printf("Grade is : C \n");
            }
            else if (result >= 40 && result < 50){
                printf("Congratulations! The student has been passed. \n");
            printf("Student mark is: %0.0f \n ",result);
                printf("Grade is : B \n");
            }
            else if(result >= 50 && result < 60){
                printf("Congratulations! The student has been passed. \n");
            printf("Student mark is: %0.0f \n ",result);
                printf("Grade is : D \n");
            }
            else if(result >= 60 && result <70){
                printf("Congratulations! The student has been passed. \n");
            printf("Student mark is: %0.0f \n ",result);
                printf("Grade is : A \n");
            }
            else if(result >= 70 && result <80){
                printf("Congratulations! The student has been passed. \n");
            printf("Student mark is: %0.0f \n ",result);
                printf("Grade is : A \n");
            }
            else if(result >= 80 && result <100 ){
                printf("Congratulations! The student has been passed. \n");
            printf("Student mark is: %0.0f \n",result);
                printf("Grade is : A+ \n");
            }
        else if(result < 30 ) { 
            printf("The student has been failed.\n");
            printf("Student mark is : %0.0f \n ", result );
            printf("Grade is : F \n");
        }}
            printf("<!Develop  by Pranto!>"); 
    return 0;
}
