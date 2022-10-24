#include <stdio.h>
#define arraySize 20 //Replaces all "arraySize" text with 20 prior to compiling


float  averageInt(int x) //Function that will return the average of the array values
{
    float i; //Temporary float to hold calculated value
    i = (float)x / arraySize ; //Sets inputted integer to a float and divides by size of array
    return i; //Returns calculated value
}


int main(void) //"Start Button"
{
    int array[arraySize] = {0}; //Builds and initializes array

    int x = 0 ; //First loop variable
    int y = 0; //Second loop variable
    float total = 0; //Variable for total vale of array
    
    printf("**** Array Values ****\n"); //Prints title for array values
    
    for( ; x<arraySize; ++x) //Begins first loop
    {
        array[x] = x+1; //Assigns values to the array starting at "array[0]=1"
        printf("array[%d] = %d\n",x,array[x]); //Prints values of array
    }
        
    for( ; y<arraySize; ++y) //Starts second loop for calculating total
    {
      total = total +  array[y]; //Calculate total value of array
    }
    
    printf("\n**** Calculations ****\n"); //Prints title for calculations

    printf("Total of All Elements = %.0f\n",total); //Prints total of array

    printf("Average = %.2f\n",averageInt(total)); //Calls averageInt and prints average of array
}

 
