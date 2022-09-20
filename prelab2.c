#include <stdio.h> //This includes the library of functions

int main(void) //The "main" starts the program

{
    
    int integer1; //First number to be typed by user
    int integer2; //Second number to be typed by user
    int integer3; //Third number to be typed by user
    int integer4; //Fourth number to be typed by user

    int sum; //Variable which the sum will be stored
    int product; //Variable which the product will be stored
    int quotient; //Variable which the quotient will be stored
    int remainder; //Variable which the remaineder will be stored
    int equation; //Variable which the result of the equation will be stored

    printf("Enter Value for First Integer...\n"); //Prompt the user
    scanf("%d",&integer1); //Read first integer

    printf("Enter Value for Second Integer...\n"); //Prompt the user
    scanf("%d",&integer2); //Read second integer

    printf("Enter Value for Third Integer...\n"); //Prompt the user
    scanf("%d",&integer3); //Read third integer

    printf("Enter Value for Fourth Integer...\n"); //Prompt the user
    scanf("%d",&integer4); //Read fourth integer

    printf("A=""%d\n",integer1); //Print A=__
    printf("B=""%d\n",integer2); //Print B=__
    printf("C=""%d\n",integer3); //Print C=__
    printf("D=""%d\n",integer4); //Print D=__

    sum = integer2 + integer3; //Assign value to sum as B+C
    printf("The Sum of B and C is... %d\n",sum); //Prints the result of sum

    product = integer1 * integer4; //Assigns value to product as A*D
    printf("The Product of A and D is... %d\n",product); //Prints result of product

    quotient = integer1 / integer3; //Assign the value to quotient as A/C
    printf("The Quotient of A Divided By C is... %d\n",quotient); //Prints result of the quotient

    remainder = integer3 % integer4; //Assigns the value of the remainder of C/D 
    printf("The Remainder of C Divided By D is... %d\n", remainder); //Prints the result of the remainder of C divided by D
    
    equation = (integer1 * integer3) / (integer2 + integer4); //Assign value to equation
    printf("A and C Divided By The Quantity Sum Of B Plus D is... %d\n",equation); //Prints the result of the equation

    return 0; //Indicates the program ended sucessfully

}
