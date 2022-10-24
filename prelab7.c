#include <stdio.h> //Include Standard Library
#define COLS 3  // Replaces COLS with 3
#define ROWS 12 // Replacs ROWS with 12 

/*************************************************************************************************/


void Print2DArray(int array[][COLS], int rows) //This function will print a 2D array
{
    printf("Here's the Matrix:"); //Prints title

    for(int i = 0; i < rows; i++) //Begins the loop for the rows
    {
        printf("\nRow %d:", i); //Prints Row #

        for(int j = 0; j < COLS ; j++) //Begins the loop for columns
        {
            printf(" %d", array[i][j]); //Prints the matrix
        }
    }

    printf("\n\n"); //Extra line spaces
}


/*************************************************************************************************/


int PrintRowAverage(int array[][COLS], int whichrow) //This function will print the average for each row in a 2D array 
{

    int counter = 0; //Tempoary "counter" variable set to 0
   
    for(int j = 0; j < COLS; j++) //Begins the loop for columns
    {
        counter = counter + array[whichrow][j]; // "New Counter Value" = "Old Counter Value" + array[Inputted Row][Column]
    }

    printf("Average of Row %d: %.6f\n", whichrow,(double)counter/COLS); //Prints row number and calculated average of row
    
    return 0; // "Ends function"

}


/*************************************************************************************************/


int PrintColAverage(int array[][COLS], int whichcol) //This function will print the average for each column in a 2D array
{
    int counter = 0; //Temporary "counter" variable set to 0

    for(int i = 0; i <ROWS; i++) //Begins loop for rows
    {
        counter = counter + array[i][whichcol]; // "New Counter Value" = "Old Counter Value" = array[row][Inputted Column]
    }

    printf("Average of Column %d: %.6f\n", whichcol, (double)counter/ROWS); //Prints column number and calculated average of column

    return 0; //"Ends function"
}


/*************************************************************************************************/


void Print2DArrayPlusNumber(int array[][COLS], int rows, int numAdd) // This function will add an imported number "numAdd" to the 2D array and print it
{
    printf("Here's the Matrix + %d:",numAdd); //Prints title

    for(int i = 0; i < rows; i++) //Begins the loop for rows
    {
        printf("\nRow %d:", i); //Prints row number

        for(int j = 0; j < COLS; j++) //Begins the loop for columns
        {
            printf(" %d",(array[i][j]) + numAdd); //Prints the result of the value + "numAdd"
        }
    }
    printf("\n\n"); //Extra Space Lines        
}


/*************************************************************************************************/


int PrintRowSum(int array[][COLS], int whichRow) //This funciton will print the sum of a row in a 2D array
{
  int counter = 0; //Temporary variable "counter" set to 0

  for(int i = 0; i < COLS; i++) //Begins loop for columns
  {
     counter = counter + array[whichRow][i]; //"New Counter Value" = "Old Counter Value" + array[Importted Row][Column]
  }

  printf("Sum of Row %d: %.6f\n", whichRow, (double)counter); //Prints the row number and the calculated sum

  return 0; //"Ends function"
}


/*************************************************************************************************/


int PrintColSum(int array[][COLS], int whichCol) //This function will print the sum of a column in a 2D array
{
    int counter = 0; //Temporary "counter" variable set to 0

    for(int i = 0; i < ROWS; i++) //Begins loop for rows
    {
        counter = counter + array[i][whichCol]; //"New Counter Value" = "Old Counter Value" + array[Row][Importted Column]
    }
    printf("Sum of Column %d: %.6f\n", whichCol,(double)counter); //Prints the column  number and the calculated sum 

    return 0; //"Ends Function"
}


/*************************************************************************************************/


void SetArrayToZero(int array[][COLS], int rows) //This function will set all of the initial array values to 0
{
    for (int i = 0; i < rows; i++) //Begins the loop for the rows
    {
        for (int j = 0; j < COLS; j++) //Begins the loop for the columns
        {
            array[i][j] = 0; // array[Row][Column] = 0
        }
    }

    Print2DArray(array, rows); //Calls Print2DArray function to print new matrix
}


/*************************************************************************************************/


int PrintArrayAvg(int array[][COLS], int rows)
{
    float counter = 0;
    for(int j = 0; j < COLS; j++)     
    {
        for(int i = 0; i < ROWS; i++)
        {
            counter = counter + array[i][j];
        }       
    }
    printf("Array Average: %.6f\n",(double)(counter/(ROWS*COLS)));

    return 0;
}


/***********************************************************************************************/


int main(void) //"Start Button"
{
    int array[ROWS][COLS] = //Allocates storage in memory for array

    {
        {72, 68, 62}, //Row 0 
        {95, 88, 95}, //Row 1
        {93, 97, 86}, //Row 2
        {98, 77, 98}, //Row 3
        {99, 92, 90}, //Row 4
        {47, 32, 27}, //Row 5
        {97, 99, 85}, //Row 6
        {85, 95, 91}, //Row 7
        {96, 91, 99}, //Row 8
        {94, 90, 85}, //Row 9
        {98, 98, 90}, //Row 10
        {76, 82, 98}  //Row 11
    };

    Print2DArray(array, ROWS); // Calls Print2DArray Function to print matrix



    printf("Here's the Row Averages:\n"); //Prints title for row averages
    for(int x = 0; x<ROWS; x++) // Begins loop for row values
    {
        PrintRowAverage(array, x); //Calls PrintRowAverage
    }
    printf("\n\n"); //Extra Space Lines
    

    printf("Here's the Column Averages:\n"); //Prints title for column averages
    for(int y = 0; y < COLS; y++) //Begins loop for column values
    {
        PrintColAverage(array, y); //Calls PrintColAverage
    }
    printf("\n\n"); //Extra Space Lines


    Print2DArrayPlusNumber(array, ROWS, 100); //Calls Print2DArrayPlusNumber with numAdd = 100


    printf("\nHere's the Row Sums:\n"); //Prints the title for the row sums
    for(int z = 0; z < ROWS; z++) //Begins loop for row values
    {
        PrintRowSum(array, z); //Calls PrintRowSum
    }
    printf("\n\n"); //Extra Space Lines


    printf("Here's the Column Sums:\n"); //Prints the title for column sums
    for(int w = 0; w < COLS; w++) //Begins the loop for column values
    {
        PrintColSum(array, w); //Calls PrintColSum
    }
    printf("\n\n"); //Extra Space Lines


    printf("Here's the Average of the Array:\n");
    PrintArrayAvg(array, ROWS);
    printf("\n\n");



    printf("Setting Array to Zero\n"); //Prints title stating the array is being set to 0
    SetArrayToZero(array, ROWS); //Calls SetArrayToZero

}
