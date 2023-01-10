/***************************
 * CS1050
 * Fall 2022
 * Lab 10
 * by Andrew Klusmeyer (askrpz)
 ***************************/



// includes
#include <stdio.h>
#include <ctype.h>



// Symbolic Constants
#define S1 "1, 2, 3, 4 tell me that you love me more.  Sleepless long nights, that is what my youth was for."
#define S2 "\t99 dreams I have had.  In every 1 a red balloon."
#define S3 "And you'll start cryin' 96 tears."
#define S4 "I demand the sum of.....$1,000,000.00!"
#define STRINGCOUNT 4



////////////////
// Prototypes //
////////////////


char * Reverse(char *s)
//This function will reverse the capitalization of a strings characters
{
    for(int i = 0; i < 256; i++) //Begins loop
    {
        if(s[i] == '\0') //Checks for null terminator
        {
            break; //Breaks out of loop
        }

        else if(islower(s[i]) == 0) //Checks for capital letter (lower = false)
        {
            s[i] = tolower(s[i]); //Changes to lowercase
        }

        else if(isupper(s[i]) == 0) //Checks for lowercase letter (upper = false)
        {
            s[i] = toupper(s[i]); //Change to uppercase
        }
    }
    return s; //Returns the modified string
}
        




char * Filter(char *s)
/*This function will remove all white space and 
 * punctuation in a string*/

{
    char tempString[4096]; //Declares large amount of storage for temporary string
    int counter = 0; //Creates temporary counter

    for(int i = 0; i < 256; i++) //Begins the loop for assigning values to temporary string
    {
        if(s[i] == '\0') //Checks for null terminator   
        {
            break; //Breaks out of loop
        }

        else if(s[i] != ' ') //Checks for spaces
        {
            if(s[i] != '\t') //Checks for tabs
            {
                if(s[i] != '\n') //Checks for new lines
                {
                    if(ispunct(s[i]) == 0) //Checks for punctuation
                    {

                    tempString[counter] = s[i]; //Adds the value of s[i] to the tmporary string
                             
                    ++counter; // Adds 1 to the temporary counter                             
                    
                    
                    }
                    

                }

            }

         }

    }
    
    tempString[counter] = '\0'; //Adds the null terminator at the end of the temporary string
    s = tempString; //Sets s equal to the tempoary string
    
    Reverse(s);

    return s; //Returns s
}




// Main
int main(void)
{
    char s[STRINGCOUNT][256]=
    {
        S1,S2,S3,S4,
    };
    
    //Declares storage and intializes array using symbolic constants


    printf("**** Original Strings ****\n"); //Prints header text
    for (int i=0;i<STRINGCOUNT;i++) //Begins loop
    {
        printf("#%d: %s\n",i,s[i]); //Prints intial strings
    }

    printf("\n\n**** Strings after filtering ****\n"); //Prints header text
    for (int i=0;i<STRINGCOUNT;i++) //Begins loop
    {
        printf("#%d: %s\n",i,Filter(s[i])); //Calls Filter and prints the modified strings
    }
}
