
//Write a program to check whether roots of a given quadratic equation are real & disinct, real & equal
// or imaginary roots//

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("Enter Values of A and B Or C :\n");
    scanf("%d%d%d",&a,&b,&c);

    int Disc = b*b - 4*a*c;

   if (Disc > 0)
   {

       printf("Real & distinct roots");
   }
   else if( Disc < 0)
   {
       printf("Imaginary roots");
   }
   else{
    printf(" Real & Equal ");
   }
   return 0;
}
//completed//
