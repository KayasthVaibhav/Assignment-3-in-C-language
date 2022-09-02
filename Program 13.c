//Write a program to check whether a given number is divisible by 3 and divisible by 2. ....?

#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter A Number :");
    scanf("%d",&x);
    {
        if(x%2==0)

            printf("Given Number is Divisible By 2 .");

        else if(x%3==0)
            printf("Given Number is Divisible By 3 .");

        else
            printf("Given Number is not Divisible By Values 2 and 3 .");
    }
    return 0;
}
//Completed//
