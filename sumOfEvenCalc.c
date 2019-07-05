/*********************************************************************/
/* sumOfEvenCalc.c 				                            */
/* Geoffrey Hoffman			                                            */
/* 04 August, 2013                                                                                                  */
/* program to calculate sum of all even numbers between 10 and 40      */

#include <stdio.h>

int main()
{

	int x ;         	//* control variable x
	int total = 0;             //* running total of all values of x

                                                   //* for statement to find all even numbers between 10 and 40
	printf ( "Running total of sum of even number between 10 and 40: \n" );
	for ( x = 10 ; x <= 40 ; x +=2  )
    	{
    	                               //* addds x to total during each iteration
    	total = total + x;
    	printf ( " %u \n", total);
       	 }
    	                            //* prints final value of total
    printf (" \n Total of even numbers between 10 and 40 is equal to:  %u \n", total);

    return 0;
}

