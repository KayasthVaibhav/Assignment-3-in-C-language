//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle
//the triangle is valid or Not. .....?

#include <stdio.h>
#include <conio.h>
 int main()
 {
     int a,b,c;

     printf("Enter a Value Tringle Sides A and B and C By User:\n ");
     scanf("%d%d%d",&a,&b,&c);
{
     if( a+b>c && a+c>b && c+b>a )

         printf(" Given Tringle Is Valid ");

     else
        printf("Given Tringle Is InValid ");
     }
     return 0;

 }
//completed//
