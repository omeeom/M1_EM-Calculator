/**
 * @file calc.c
 * @author Om Gautam (omee1434omee@gmail.com)
 * @brief Electro Mathematical Calculator
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "cal.h"


// main function
int main()
{
  float n1, n2;
  int ch;

  do{
    

    printf("\n*****************");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Remainder");
    printf("\n6.Power (x^y)");
    printf("\n7.Voltage");
    printf("\n8.Current");
    printf("\n9.Capacitance");
    printf("\n10.Resistance");
    printf("\n11.Electrical Power");
    printf("\n12.Exit");
    
    
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
   
    switch (ch) {
      case 1:
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        add(n1,n2);
        break;
      case 2:
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        subtract(n1,n2);
        break;
      case 3:
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        multiply(n1,n2);
        break;
      case 4:
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        divide(n1,n2);
        break;
      case 5:
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        rem(n1,n2);
        break;
      case 6:
        printf("Enter two numbers: ");
        scanf("%f %f", &n1, &n2);
        power(n1,n2);
        break;
    case 7:
        printf("Enter current and resistance: ");
        scanf("%f %f", &n1, &n2);
        voltage(n1,n2);
        break;
    case 8:
        printf("Enter voltage and resistance: ");
        scanf("%f %f", &n1, &n2);
        current(n1,n2);
        break;
    case 9:
        printf("Enter charge and voltage: ");
        scanf("%f %f", &n1, &n2);
        capacitance(n1,n2);
        break;
    case 10:
        printf("Enter voltage and current: ");
        scanf("%f %f", &n1, &n2);
        resistance(n1,n2);
        break;
    case 11:
        printf("Enter voltage and current: ");
        scanf("%f %f", &n1, &n2);
        electricalpower(n1,n2);
        break;
      case 12:
        printf("Thank You.");
        exit(0);
      default:
        printf("Invalid input.");
        printf("Please enter correct input.");
    }

    printf("\n**********************************\n");
  }while(1);

  return 0;
}


