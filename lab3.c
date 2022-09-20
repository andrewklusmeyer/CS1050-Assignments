/*********************************
 * CMP_SC 1050
 * FS 2022
 * Lab 3
 * Written By Andrew Klusmeyer (askrpz)
 * September 9th, 2022
 ********************************/


#include <stdio.h> //Includes library of functions

int main(void) //"Start button"
{
    int x=100; //Sets "x" =100

    while(x>=1) //Begins 100 -> 1 loop
    {
        if(x%2==0) //Checks if X is even
        {

            if(x%7==0) //Checks if divisable by 7
            {
                if(x%3==0) //Checks if divisable by 3
                {
                    printf("TS%d ",x); //Prints TS#
                } 
           

                else
                {
                printf("S%d ",x); //Prints S#
                }
            }

           else if(x%3==0) //Checks if divisable by 3
            {
                printf("T%d ",x); // Prints T#
            }
            else 
            {
                printf("%d ",x); //Prints number if x is not divisable by 3 or 7
            }
       } 
    x--; //Miinus  1 from  x

    }
}
