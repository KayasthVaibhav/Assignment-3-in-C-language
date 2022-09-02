//Write a program to which takes the cost price and selling price of a product from the user. Now
//Calculate and print profit or loss percentages....?

#include <stdio.h>
#include <conio.h>
 int main()
 {
     float CostPrice, SellingPrice ,Profit ,LossPrice;
     float Profit_Percentage,LossPrice_Percentage;
    {
    printf("Enter A Cost Price OF Product :");
    scanf("%f", &CostPrice);

    printf("Enter A SellingPrice OF Product : ");
    scanf("%f",&SellingPrice);

    Profit =  SellingPrice - CostPrice;
    printf(" Profit IN Product %f",Profit);

   printf("\n Enter The Profit of Product Is :");
   scanf("%f",&Profit);

   printf("Enter A Cost Price OF Product Is :");
    scanf("%f", &CostPrice);


    Profit_Percentage = (Profit* 100)/CostPrice;
    printf("Profit_Percentage In Product is %f\n",Profit_Percentage);


    printf("\nEnter A Cost Price OF Product :");
    scanf("%f", &CostPrice);

    printf("Enter A SellingPrice OF Product : ");
    scanf("%f",&SellingPrice);

    LossPrice = CostPrice - SellingPrice ;
    printf(" LosePrice IN Product %f",LossPrice);

   printf("\n Enter The LosePrice of Product Is :");
   scanf("%f",&LossPrice);

   printf("Enter A Cost Price OF Product Is :");
    scanf("%f", &CostPrice);


    LossPrice_Percentage = (LossPrice* 100)/CostPrice;
    printf("\n LosePrice_Percentage In Product is %f\n",LossPrice_Percentage);
    }

     return 0;
    }
//completed//
