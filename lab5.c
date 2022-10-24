/********************************
 * CMP_SC 1050
 * FS 2022
 * Lab 5
 * Written By Andrew Klusmeyer
 * September 30th, 2022
*********************************/

#include <stdio.h> //Include Standard Library

int Summation (int n)  //Function that will add the sum of all numbers squared
{
    int x = 0; //Assigns temp integer "x" to 0, in which, will be the variable used for results;

    for ( ; n>=1 ; n--) // Begins for loop using input value and will loop until n=1
    {
        x=(n*n)+x; // "New Value = Old Value + (Input Squared)"
    }
    return x; //Returns x to main
}

int main(void) //"Start Button"
{
    int count = 1; //Sets counter to 1
    for ( ; count <=10 ; count++) //Begins for loop for 1-10
    {
        printf("The summation of 1 through %d squared = %d\n",count,Summation(count));
        /*While "count" is between 1 and 10, the printf will execute and
        use the "count" integer to assign a value to the first %d
        along with calling Summation with the input value of "count". */
    }
}

