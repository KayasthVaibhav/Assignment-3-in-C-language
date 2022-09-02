// Write a program to print greater between two numbers. Print one number of both are the same :?//

#include <stdio.h>
#include <conio.h>

int main()
{

     int a,b;
     printf("Enter two numbers : A and B \n");
     scanf("%d%d",&a,&b);

     if(a>b)
     {

         printf("A is greater..");
     }
     else if (a<b)
     {

         printf("B is greater ..");

     }
     else if (a==b)
     {

        printf(" Both are same values: %d ",a);
     }

     return 0;
}
//Completed//
