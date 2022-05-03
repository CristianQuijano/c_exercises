#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, add, sub, mul, rem, div;
    char sat;

    printf("\n Hello! This is a test program to try and understand the use of the C language. \n Please, follow the instructions.");

    printf("\n \n Give me any number that you want, from 0 to 100, and I will give you another number, randomly: ");
    scanf("%i",&num1);

    srand(time(0));
    num2 = rand() % 100;

    printf("\n Okay, so your number is %i. My number is %i", num1,  num2);
    printf("\n Now, I will tell you the result of the addition, subtraction, product and division of %i and %i", num1, num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;

    if (num1 > num2){
        div = num1 / num2;
        rem = num1 % num2;
        if (rem == 1){
           printf("\n Ready, so the addition is: %i. The subtraction is: %i, the product is: %i and the division is: %i", add, sub, mul, div);
        }else{
            printf("\n Ready, so the addition is: %i. The subtraction is: %i, the product is: %i and the division is: %i with remainder %i", add, sub, mul, div, rem);
        }
    }else{
        div = num2 / num1;
        rem = num1 % num2;
        printf("\n \n Okay, so my number is bigger than yours, so let's divide mine by yours.");
        if (rem == 1){
           printf("\n Ready, so the addition is: %i. The subtraction is: %i, the product is: %i and the division is: %i", add, sub, mul, div);
        }else{
            printf("\n Ready, so the addition is: %i. The subtraction is: %i, the product is: %i and the division is: %i with remainder %i", add, sub, mul, div, rem);
        }
    }

    return 0;
}
