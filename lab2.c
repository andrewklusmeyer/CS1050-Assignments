/*********************************************

 * CMP_SC 1050
 * FS 2022
 * Lab 2
 * Written By Andrew Klusmeyer (askrpz)
 * September 2nd, 2022

 ********************************************/



#include <stdio.h> //This includes the library of functions

int main(void) //The "main" starts the program

{
    int X; //First number to be typed by the user
    int Y; //Second number to be typed by the user

    int product; //Stores the product of X*Y
    int quotient; //Stores the quotient of X/Y
    int equation ;//Stores the value of (X+1)*Y

    printf("Enter Value for X...\n"); //Prompt the user to input X value
    scanf("%d",&X); //Read X value

    printf("Enter Value for Y...\n"); //Prompt the user to input Y value
    scanf("%d",&Y); //Read Y value

    printf("X=""%d\n",X); //Print X=___
    printf("Y=""%d\n",Y); //Print Y=___

    product = X * Y; //Assigns value of X*Y to product
    printf("The Product of X and Y is...%d\n",product); //Prints result of product

    quotient = X / Y; //Assigns value of X/Y to quotient
    printf("The Quotient of X Divided By Y is...%d\n",quotient); //Prints result of quotient

    equation = (X + 1) * Y; //Assigns value to equation
    printf("The Value of X Plus 1, Quantity Times Y is...%d\n",equation); //Prints the result of equation

    printf("X Remains Equal To...""%d\n",X); //Prints secondary X=___
    printf("Y Remains Equal To...""%d\n",Y); //Prints secondary Y=___

    return 0;

}

