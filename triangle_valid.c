#include<stdio.h>
//Enter the triangle value an find out the valid triangle.
  //Code by [PRANTO]
int main (){
    float a,b,c;
    //giving 3 angles and find out the triangle is valid or not;
        printf("Input the first angles value: ");
    scanf("%f",&a);
        printf("Input the second angles value: ");
    scanf("%f",&b);
        printf("Input the third angles value: ");
    scanf("%f",&c);
    //formula->
    float angels;
        angels = (a + b + c);
    if (angels == 180 && a >0 && b >0 && c >0)
    {
        printf("The triangle is valid.");
    }
    else { 
    printf("The triangle is not valid.");
    }
    return 0;
}
