#include<stdio.h>
//Find out triangle
//Code by-> [PRAN]
int main (){
    int a;
    int b;
    int c;
        printf("Input the triangle first value :");
    scanf("%d", & a );
        printf("Input the triangle second value :");
    scanf("%d", & b );
        printf("Input the triangle third value :");
    scanf("%d", & c );
//formula->[EQUILATERAL]
    if ((a==b) && (a==c) && (b==c))
    {
        printf("The triangle is an Equilateral.\n");
        printf("Every value of the triangle are same.\n");
    }
//formula->[ISOSCELES]        
    else if (a == b )
    {
        printf("This triangle is a Isosceles triangle.\n");
        printf("Both first  and second value are same.\n");
    }
    else if (a == c)
    {
        printf("This triangle is a Isosceles triangle.\n");
        printf("Both first  and third value are same.\n");
    }
    else if (b == c)
    {
        printf("This triangle is a Isosceles triangle.\n");
        printf("Both second  and third value are same.\n");
    }
//formula->[SCALENE]    
    else 
    {
        printf("This is a  scalene triangle.\n");
        printf("Every value of the  triangle are different.\n");
    }
    return 0;
}