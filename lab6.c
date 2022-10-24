/*********************************
 * CMP_SC 1050
 * FS 2022
 * Lab 6
 * Written By Andrew Klusmeyer
 * October 7th, 2022
*********************************/

#include <stdio.h> //Includes Standard Library
#define arraySize 50 // Defines "arraySize" as 50

int main(void) //"Start Button"
{
    int i; //Variable used to control loop
    int array[arraySize]; //Begins creating the array
    int evenTotal = 0; //Variable for total of even elements
    int oddTotal = 0; //variable for total of odd elements

    printf("**** Array Elements ****\n"); //Prints Array Elements Header

    for(i = 0 ; i < arraySize; i++ ) //Begins loop
    {
        array[i] = (i*2) + 1; //Calculates an initializes the array

        if(i % 2 == 0) //Checls if the array element is even
        {
            evenTotal = evenTotal + array[i]; //If even, adds the value to total
        }

        else
        {
            oddTotal = oddTotal + array[i]; //If not even, adds it to odd total
        }
 
        printf("array[%d] = %d\n",i,array[i]); //Prints the array
    }

    printf("\n**** Totals and Averages ****\n"); //Prints Totals and Averages Header
    printf("Total of Even Elements in Array = %d\n", evenTotal); //Prints value of evenTotal calculated from loop
    printf("Average of Total of Even Elements = %.2f\n",(float)evenTotal/(arraySize/2)); //Calculates even  average and returns a float with 2 decimal places
    printf("Total of Odd Elements in Array = %d\n", oddTotal); //Prints value of oddTotal calculated from loop
    printf("Average of Total of Odd Elements = %.2f\n",(float)oddTotal/(arraySize/2)); //Calculates odd average and returns a float with 2 decimal places
               
}
