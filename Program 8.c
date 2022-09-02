//Write a program to check whather a given year is a leap Year or Not...?

#include <stdio.h>
#include <conio.h>
 int main()
 {
     int year;
     printf("Enter a number \n");
     scanf("%d",&year);

     if ( year % 400 == 0)
     {
         printf("%d Leap Year", year);
     }
     else if(year % 100 == 0)
     {
         printf("%d Is not a Lear Year", year);

     }

      else

        if (year % 4 == 0)
     {
         printf("%d Is not a Lear Year", year);

     }


     return 0;

 }
