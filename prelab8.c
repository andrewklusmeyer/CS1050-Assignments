#include <stdio.h>

void GetIntegerArray(int* outputIntArray, int* count) //This function will assign user inputted values to the array
{
    printf("\nEnter The Number of Integers You Would Like To Enter:\n"); //Prompts user to enter the amount of integers
    scanf("%d", count); //Assigns "count" to inputted value

    for(int i = 0; i < *count; i++) //Begins loop
    {
        printf("Enter Element #%d: ",i + 1); //Prompts user to enter element of array
        scanf("%d", (outputIntArray + i)); //Assigns inputted value to array
    }
}


void PrintArray(int* array , int size) //This function will print the array
{
    printf("\nYou entered an array with %d elements:\n", size); //Prompts user of how many elements are in the array

    for(int i = 0; i < size;  i++) //Begins loop
    {
        printf("\tarray[%d] = %d\n", i, *(array + i)); //Tabs the printed message and prints the array
    }
}


int main(void)
{
    int array[250] = {0}; //Intializes array to 0 and assumes there wont be more than 250 inputted values
    int count = 0; //Sets count = 0
    
    printf("\n\n ***********************\n * Welcome to Prelab 8 *\n ***********************\n ");

    GetIntegerArray(array, &count); //Calls GetIntegerArray
    PrintArray(array, count); //Calls PrintArray
}

