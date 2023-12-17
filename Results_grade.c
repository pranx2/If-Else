#include<stdio.h>
//Result Grade...Code by [PRAN];
int main (){
    float CSE;
    float cse;
    float Math;
    float English;
    float Physics;
    float GED;
        //Entering variables data->
            printf("Input the marks of CSE:");
        scanf("%f",& CSE  );
            printf("Input the marks of Math:");
        scanf("%f",& Math);
            printf("Input the marks of English:");
        scanf("%f",& English);
            printf("Input the marks of Physics:");
        scanf("%f",& Physics);
            printf("Input the marks of GED:");
        scanf("%f",& GED);
        //Variables distributes;
    float total_marks;
    total_marks = (CSE + Math + English + Physics + GED);
    float average;
    average = ((total_marks)/2);
    float percentage;
    percentage = ((500+total_marks)/10);
    char percent;
    percent = '%';
    //conditions;
    if (percentage >= 90 && percentage <= 100)
    {
        printf("CONGRATULATION! You have been PASSED! \n");
        printf("Total mark is %0.2f out of 500 \n",total_marks);
        printf("Average mark is  %0.2f out of 250.\n",average);
        printf("Total percentage is %0.2f %c out of 100 %c  \n",percentage,percent,percent);
        printf("Grade: A \n");
    }
    else if (percentage >=80 && percentage <= 100)
    {
        printf("CONGRATULATION! You have been PASSED! \n");
        printf("Total mark is %0.2f out of 500 \n",total_marks);
        printf("Average mark is  %0.2f out of 250 \n",average);
        printf("Total percentage is %0.2f %c out of 100 %c  \n",percentage,percent,percent);
        printf("Grade: B \n");
    }
    else if (percentage >= 70 && percentage <= 100)
    {
        printf("CONGRATULATION! You have been PASSED! \n");
        printf("Total mark is %0.2f out of 500 \n",total_marks);
        printf("Average mark is  %0.2f out of 250 \n",average);
        printf("Total percentage is %0.2f %c out of 100 %c  \n",percentage,percent,percent);
        printf("Grade: C \n");
    }
    else if (percentage >= 60 && percentage <= 100 )
    {
        printf("CONGRATULATION! You have been PASSED! \n");
        printf("Total mark is %0.2f out of 500\n",total_marks);
        printf("Average mark is  %0.2f out of 250\n",average);
        printf("Total percentage is %0.2f %c out of 100 %c  \n",percentage,percent,percent);
        printf("Grade: D \n");
    }
    else if (percentage >=40 && percentage <= 100)
    {
        printf("CONGRATULATION! You have been PASSED! \n");
        printf("Total mark is %0.2f out of 500 \n",total_marks);
        printf("Average mark is  %0.2f out of 250 \n",average);
        printf("Total percentage is %0.2f %c out of 100 %c  \n",percentage,percent,percent);
        printf("Grade: E \n");
    }
    else if (percentage < 40 && percentage  <= 100)
    {
        printf("SORRY.You have been FAILED! \n");
        printf("Total mark is %0.2f out of 500 \n",total_marks);
        printf("Average mark is  %0.2f out of 250\n",average);
        printf("Total percentage is %0.2f %c out of 100 %c  \n",percentage,percent,percent);
        printf("Grade: F \n");
        
    }
    else{printf("Give the valid marks \n");}
        printf("Thank you.\n CODE BY PRANTO");
return 0;
}