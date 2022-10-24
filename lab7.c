/**********************************
 * CMP_SC 1050
 * FS 2022
 * Lab 7
 * Written By Andrew Klusmeyer
 * October 14th, 2022
**********************************/

#include <stdio.h> //Includes Standard Library
#define gradeRows 12 //Replaces "gradeRows" with 12
#define gradeCols 3 //Replaces "gradeCols" with 3
#define cutRows 4 //Replaces "cutRows" with 4
#define cutCols 3 //Replaces "cutCols" with 3


void PrintScoreArray(int array[][gradeCols], int rows) //This funtion will print the array of scores
{
    printf("Here's the Scores:"); //Prints title

    for(int i = 0; i < rows; i++) //Begins loop for rows
    {
        printf("\nRow %d:", i); //Prints Row #;

        for(int j = 0; j < gradeCols; j++) //Begins loop for columns
        {
            printf(" %d", array[i][j]); //Prints the matrix
        }
    }
    printf("\n\n"); //Extra Space Lines
}


void PrintCutoffArray(int array[][cutCols], int rows) //This funstion will Print the array for the cut offs
{
    printf("Here's the Grade Cutoffs:"); //Prints title

    for(int i = 0; i < rows; i++) //begins loop for rowa
    {
        printf("\nRow %d:", i); //prints row #

        for(int j = 0; j < cutCols; j++) //begins loop for columns
        {
            printf( " %d", array[i][j]); //prints matrix
        }
    }
    printf("\n\n"); //extra space
}


int FindGrades(int array[][gradeCols], int rows) //This function will calculate and print the grade
{
    printf("Here's the Grades:\n"); //prints title

    for (int i = 0; i < rows; i++) //begins loop for rows
    {
        printf("Student %d:",i); //prints student #

        for(int j = 0; j < gradeCols; j++) //begins loop for columns
        {
            switch (j)
            {
                case(0): //Column 0
                if(array[i][j] >= 85) //Checks for A requirement
                {
                    printf(" A"); //Prints A
                }
                if(array[i][j] >= 75) //Checks for B requirement
                {
                    if(array[i][j] < 85)
                    {
                        printf(" B"); //Prints B
                    }
                }
                if(array[i][j] >=60) //Checks for C requirement
                {
                    if(array[i][j] < 75)
                    {
                        printf(" C"); //prints C
                    }
                }
                if(array[i][j] >= 50) //Checks for D requirement
                {
                    if(array[i][j] < 60)
                    {
                        printf(" D"); //print D 
                    }
                }
                if(array[i][j] < 50) //Checks for F requirement
                {
                    printf(" F"); //Prints F
                }
                break;


                case(1): //Column 1
                if(array[i][j] >= 90)
                {
                    printf(" A");
                }
                if(array[i][j] >= 80)
                {
                    if(array[i][j] < 90)
                    {
                        printf(" B");
                    }
                }
                if(array[i][j] >=70)
                {
                    if(array[i][j] < 80)
                    {
                        printf(" C");
                    }
                }
                if(array[i][j] >= 60)
                {
                    if(array[i][j] < 70)
                    {
                        printf(" D");
                    }
                }
                if(array[i][j] < 60)
                {
                    printf(" F");
                }
                break;
                
                case(2): //Column 2
                if(array[i][j] >= 90)
                {
                    printf(" A");
                }
                if(array[i][j] >= 75)
                {
                    if(array[i][j] < 90)
                    {
                        printf(" B");
                    }
                }
                if(array[i][j] >=55)
                {
                    if(array[i][j] < 75)
                    {
                        printf(" C");
                    }
                }
                if(array[i][j] >= 40)
                {
                    if(array[i][j] < 55)
                    {
                        printf(" D");
                    }
                }
                if(array[i][j] < 40)
                {
                    printf(" F");
                }
                break;
                

            }
        }
        printf("\n"); //New line for each student
    }
    return 0; //"Ends Funstion"
}

int main() //"Start Button"
{
    int scoresArray[gradeRows][gradeCols] = //Allocates storage in memory for array
    {
        {72, 68, 62}, //Row 0
        {95, 88, 95}, //Row 1
        {93, 97, 86}, //Row 2
        {98, 77, 98}, //Row 3
        {99, 92, 90}, //Row 4
        {47, 32, 27}, //Row 5
        {97, 99, 75}, //Row 6
        {85, 95, 91}, //Row 7
        {96, 91, 99}, //Row 8
        {94, 90, 74}, //Row 9
        {98, 98, 90}, //Row 10
        {76, 82, 98}  //Row 11
    };


     int cutoffArray[cutRows][cutCols] = //Allocates storage in memory for array
     {
         {85, 90, 90}, //Row 0
         {75, 80, 75}, //Row 1
         {60, 70, 55}, //Row 2
         {50, 60, 40}  //Row 3
     };


    PrintScoreArray(scoresArray, gradeRows); //Calls PrintScoreArray

    PrintCutoffArray(cutoffArray, cutRows); //Calls PrintCutoffArray

    FindGrades(scoresArray, gradeRows); //Calls FindGrades

    return 0;
}


