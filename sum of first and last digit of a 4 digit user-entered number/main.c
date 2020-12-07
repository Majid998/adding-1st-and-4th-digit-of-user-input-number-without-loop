/*If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.
author Majid Mujahid Hussain dated 6 December 2020.
*/
 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, remainder = 0, sum = 0;
    printf("Hello world!\n");

     printf("Please enter a four digit number \n");
    scanf("%d", &number);


    //splitting the number.
    remainder = number % 10;
    //printf("The splitted number is %d \n",remainder);

    //adding the number to the to sum.
    sum = sum + remainder;
    //printf("the sum of the splitted number is equal to %d \n", sum);

    // removing the splitted number from the user entered 5-digit number
    number = number / 10;
    //printf("The number after splitting is %d \n",number);

    //going second time
        //splitting the number.
    remainder = number % 10;
    //printf("The splitted number is %d \n",remainder);

    //adding the number to the to sum.
    //sum = sum + remainder;
    //printf("the sum of the splitted number is equal to %d \n", sum);

    // removing the splitted number from the user entered 5-digit number
    number = number / 10;
    //printf("The number after splitting is %d \n",number);

    //going third time
        //splitting the number.
    remainder = number % 10;
   // printf("The splitted number is %d \n",remainder);

    //adding the number to the to sum.
   // sum = sum + remainder;
    //printf("the sum of the splitted number is equal to %d \n", sum);

    // removing the splitted number from the user entered 5-digit number
    number = number / 10;
    //printf("The number after splitting is %d \n",number);

    //going fourth time
        //splitting the number.
    remainder = number % 10;
    //printf("The splitted number is %d \n",remainder);

    //adding the number to the to sum.
    sum = sum + remainder;
    printf("the sum of the splitted number is equal to %d \n", sum);

    // removing the splitted number from the user entered 5-digit number
    number = number / 10;
   // printf("The number after splitting is %d \n",number);
    return 0;
}
