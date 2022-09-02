  //// Write a program to check whether a given number is an even number or an odd number ?
// Without using %(modulas operator)?

#include <stdio.h>
#include <conio.h>

int main()

{
    int a,result;
    printf("enter a no");
    scanf("%d",&a);
    result =a&1;

    if(result == 1 )
    {
        printf("Number is Odd");
    }
    else{
        printf("Number is Even");
    }
    return 0;

}
// completed//
