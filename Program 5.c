//Write a program  to check whether a given number is a three- digit Number or not ?//

#include <stdio.h>
#include <conio.h>

int main()
{
    int x ;
      printf("Enter a number: \n");
      scanf("%d",&x);

     if(x >99 && x<1000)
     {
    printf(" Given Number is Three- digit ");
     }

    else
        {
            printf(" Given Number is more than Three- digits :");
        }
     return 0;


}
//completed//
