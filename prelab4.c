#include <stdio.h> //Includes Library of Functions

int main(void) //"Start Button"
{
    for(int integer=1;integer<=10;integer++) 

/*This for loop sets "integer" = 1, checks if "integer" is
 * less than or equal to 10 and then adds 1 to "integer"*/

        switch (integer) //Determines which "integer" value was inputed through the loop

        {

            case(1): //Checks if "integer" is equal to 1
            printf("One, "); //If "integer" is equal to 1, it will print "One"
            break; //Break out of switch

            case(2):
            printf("Two, " );
            break;

            case(3):
            printf("Three, ");
            break;

            case(4):
            printf("Four, ");
            break;

            case(5):
            printf("Five, ");
            break;

            case(6):
            printf("Six, ");
            break;

            case(7):
            printf("Seven, ");
            break;

            case(8):
            printf("Eight, ");
            break;

            case(9):
            printf("Nine, ");
            break;

            case(10):
            printf("Ten\n");
            break;

        }
}

