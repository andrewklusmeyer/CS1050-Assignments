#include <stdio.h>
#include <math.h>

double factorial(int n) //This funciton will find calculate the value of the factorial of an inputted value
{
    long result=1; //Sets "result" = 1 

    for(int i=n; i>1; i--)
        /*This loop begins by setting i equal to the inputted value
         * and then continues to check if i is greater than 1. If
         * i remains greater than 1, i will decrease by 1. */
    {
        result*=i; //Assigns the value of result as result * i
    }

    return result; // Returns value of result to where it is called
}


double findE(double e) //This function will compute the value of e (roughly)
{    
    for(int i = 1; i<30; i++) //Begins the loop to compute the value
    {
        e = e + (1/factorial(i));
        /* The formula for the value of e is
         * 1 + 1/1! + 1/2! + 1/3!...etc.
         * Therefore, this initializes the calulation
         * at e=1 and calls factorial to return the value of
         * the factorial of the denominator. Overall, it will
         * look like (New e Value) = (Old e Value) + (1 / Factorial of i) */
    }

    return e;
}


double myexp(int n) //This function evaluates e to the power of n
{
    double e = 1; //Sets variable e = 1

    e = findE(e); //Sets variable e to the computed value of e using findE

    double final = pow(e, n);
    /*Uses math.h to use pow and sets the variable "final" = e raised
     * to the power of the inputted value of n*/
    

    return final; //Returns the value of final to where ever it was called
    
}


int main(void) //"Start Button"
{
    for(int i=1; i<=5; i++) //Begins loop for powers of e
    {
        printf("e to the power of %d = %.3lf\n",i,myexp(i));
        /*This printf will print out the result of e to the power of __ is __
         * by calling the myexp function and the result 
         * is rounded to the third decimal place */
    }
}

