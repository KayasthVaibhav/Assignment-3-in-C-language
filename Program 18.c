//Write a program which takes the month number as a input and display number of days in that month ...?

#include <stdio.h>
#include <conio.h>
 int main()
 {
    int x;
    printf("Enter A month Number :");
    scanf("%d",&x);

    if( x==1 || x==3 || x==5 || x==7 || x==8 || x==9 || x==11 || x==12)

     printf("  Given This Month Number By User  in 31 Days ");

     else if( x== 4 || x==6 || x==10)

        printf(" Given This Month Number By User  in 30 Days");
        else
            if( x== 2)
                    printf(" Given This Month Number By User  in 28/29 Days");

 }
 //completed//

