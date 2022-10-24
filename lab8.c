/****************************
 * CMP_SC 1050
 * FS 2022
 * Lab 8
 * Written By Andrew Klusmeyer
 * October 21st, 2022
****************************/



#include <stdio.h> //Includes Standard Library

/*************************************************************************/

void GetIntArray(int *outputArray, int *count)
//This function will assign user inputted values to the array
{
    printf("\nEnter The Number of Elements In The Array:\n");
    //Prompts user to enter the amount of integers

    scanf("%d", count);
    //Assigns "count" to inputted value

    for(int i = 0; i < *count; i++) //Begins loop
    {
        printf("Enter Element #%d: ",i); //Prompts user to enter element of array
        scanf("%d", (outputArray + i)); //Assigns inputted value to array
    }
}

/*************************************************************************/

void PrintArray(int *array, int count)
//This function will print the array
{
    printf("\nHere are the %d elements of your array:\n", count);
    //Prompts user of how many elements are in the array

    for(int i = 0; i <count;  i++) //Begins loop
    {
        printf("\tElement [%d] = %d\n", i, *(array + i));
        //Tabs the printed message and prints the array
    }
}

/************************************************************************/

int TotalArray(int *array, int count)
//This funtion will find the total of the array and return the total value
{
    int Total = 0;
    //Intializes Total to be 0

    for(int i = 0; i < count; i++) //Begins loop
    {
        Total = Total + array[i];
        //"New Total = Old Total + array[i]"
    }

    return Total; //Returns calculated total 
}

/************************************************************************/

double AvgArray(int *array, int count)
//This function will find and return the average of the array
{
    double Average = 0; //Sets Average to 0
    double Total = 0; //Sets Total to 0

    for(int i = 0; i < count; i++) //Begins loop
    {
        Total = Total + array[i];
        //"New Total = Old Total + array[i]"
    }

    Average = Total / count;
    //Calculates Average and assigns it to Average

    return Average; //Returns Average
}

/************************************************************************/

int main(void) //"Start Button"
{
    int array[100] = {0};
    /*Intializes array to 0 and assumes there wont
      be more than 100 inputted values */

    int count = 0; //Sets count = 0

    printf("\n ********************\n * Welcome to Lab 8 *\n ********************\n ");
    //Prints welcome title message

    GetIntArray(array, &count); //Calls GetIntArray
    PrintArray(array, count); //Calls PrintArray
    
    printf("\nTotal of Array = %d\n", TotalArray(array, count));
    //Calls TotalArray and prints the total of the array

    printf("Average of Array = %.3f\n\n", AvgArray(array, count));
    //Calls AvgArray and prints the average of the array
    
    return 0; //"Ends Program"
}

