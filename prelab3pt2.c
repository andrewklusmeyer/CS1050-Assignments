#include <stdio.h> //Includes library of functions

int main(void) // "Start button"
{
    int x=1; //Sets integer "x" = 1

    while(x<=49) //Begins loop until x=49
    {
       if(x%3==0) //Checks if x is divisable by 3
        {
            if(x%5==0) //Checks if x is divisable by 5
            {
              printf("Fizz Buzz, "); //If divisable by both 3 and 5, prints Fizz Buzz
            }

            else
            {
                printf("Fizz, "); //If only divisable by 3, prints Fizz
            }

        }

        else if(x%5==0) //Checks if x is divisable by 5
        {
            printf("Buzz, "); //If x is divisable by 5, prints Buzz
        }
  
        else
        {
            printf("%d, ",x); //If x is not divisable by 3 or 5, prints the integer
        }
        x++; //Adds 1 to the value of x
    }

    while(x==50) //Starts seperate loop for x=50
    {
        if(x%3==0)
        {
            if(x%5==0)
            {
                printf("Fizz Buzz\n");
            }
            else
            {
                printf("Fizz\n");
            }
        }

        else if(x%5==0)
        {
            printf("Buzz\n");
        }
        x++; 

    }
}

