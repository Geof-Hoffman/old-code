/***************************************************************************************/
/* arrayOfFunctionPointerCalc_GeoffreyHoffman.c						           */	
/*Geoffrey Hoffman								         */
/*25 August, 2013								        */
/*text-based,  menu-driven calculator using aray of function pointers                                                 */ 
/***********************************************************************************/

#include <stdio.h>

//Prototypes of functions
	void terminate (double a,double b);
	void add (double a,double b) ;
	void subtract (double a,double b);
	void multiply (double a,double  b);
	void divide (double a,double b);
int main()
{
//initialize an array of five pointers
    
	void (*f[5]) (double,double ) = {terminate, add, subtract, multiply, divide};
//print menu and select function input
	size_t chDoing;
   double x, y;
	printf( "%s" , "Pointer to Array of Functions Calculator(0 to end)\n\n\n");
	printf("%s", "Enter 1 for addition\n");
	printf("%s", "Enter 2 for subtraction\n");
	printf("%s", "Enter 3 for multiplication\n");
	printf("%s", "Enter 4 for division\n");
	scanf ( "%u", &chDoing );

//if statement to determine if program should 
// accept input of integers for math functions
       if ( chDoing >=1)
            	{
	printf("%s", "what is your first integer? \n ");
	scanf ("%lf", &x);   // first integer
	printf("%s", "what is your second integer? \n ");
    	scanf ("%lf", &y);  //second integer

//calls function based on pointer value 
    	(*f[chDoing])( x,y );

     printf("\t%s", "Thank you for using my calculator!!\n\n");
	}
    
// calls (*f[0]) to terminate program without doing math	
	else	{
		(*f[0])( x,y );
     
		printf("\n\t%s", "Thank you for using my calculator!!\n\n");
		}
return 0;
}//end of function main

//termination function
void terminate (double a,double b){

}
//add function
void add(double a,double b)
{

   double z;
    z= a+b;
    printf ("\t%s\n\n", "addition");
    printf ( "\t%3.2f%s%3.2f%s%3.2f", a, "+",b,"=",z) ;
    return ;
}
//subtract function
void subtract (double a,double b)
{
   double z;
    z= a-b;
    printf ("\t%s\n\n", "subtraction");
    printf ( "%\t3.2f%s%3.2f%s%3.2f", a, "-",b,"=",z) ;
    return ;
}
//multiplication function
void multiply(double a,double b)
{
 double z;
    z= a*b;
    printf ("\t%s\n\n", "multiplication");
    printf ( "\t%3.2f%s%3.2f%s%3.2f", a, "*",b,"=",z) ;
    return ;
}
//division function
void divide(double a,double b)

{
    double z;
    z= a/b;
    printf ("\t%s\n\n", "division");
    printf ( "\t%3.2f%s%3.2f%s%3.2f", a, "/",b,"=",z) ;
    return ;
}

