//Write a program to take marks of 5 subjects form the user Assume markes are given out of 100 and passing  marks
// is 33 .Now display whether the candidate passed the examination or Failed ...?

#include <stdio.h>
#include <conio.h>
 int main()
 {
    int Hindi, English , Math, Physices, Science;
    printf("Enter The 5 Subject Marks:\n ");
    printf("\nEnter The marks of Hindi :");
    scanf("%d",&Hindi);
    printf("Enter The marks of English :");
    scanf("%d",&English);
    printf("Enter The marks of Math :");
    scanf("%d",&Math);
    printf("Enter The marks of Physices :");
    scanf("%d",&Physices);
    printf("Enter The marks of Science :");
    scanf("%d",&Science);

    if( Hindi>=33 && English>=33 && Math>=33 && Physices>=33 && Science>=33)

        printf(" According To given Marks Student Has been Passed ");
    else
        printf(" According To given Marks Student Has been Failed ");

    return 0;
 }

//Completed//
