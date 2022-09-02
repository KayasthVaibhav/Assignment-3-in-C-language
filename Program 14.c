//Write a program to check whether a given number is divisible by 7 or divisible by 3 ...?
#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter A Number :");
    scanf("%d",&x);
    {
        if(x%7==0)

            printf("Given Number is Divisible By 7 .");

        else if(x%3==0)
            printf("Given Number is Divisible By 3 .");

        else
            printf("Given Number is not Divisible By Values 7 and 3 .");
    }
    return 0;
}
