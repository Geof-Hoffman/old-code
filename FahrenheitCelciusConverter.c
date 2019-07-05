
/**************************************************************************/
/* FahrenheitCelciusConverter.c				      		 */
/* Geoffrey Hoffman        			    				      */
/* 10 August, 2013					     			     */
/* Program to convert between degrees Farenheit and Celsius		    */
/*********************************************************************/
#include <stdio.h>
double CelsiustoFahrenheit( double  );  //function prototypes
double FahrenheitToCelsius (double);

int main (void){

int convert; //declaration of variables 
double f;
double c;
/* I debated making this part of the file its own function but decide to keep              */
/*it a part of main. This is the part of the program that determines what function is called*/
puts ("Temperature Converter\n");        
puts ( "1. Fahrenheit to Celsius");
puts ( "2. Celsius to Fahrenheit");
printf ( "%s", "Enter 1 or 2:");
scanf ( "%d", &convert );

if ( convert ==1){
	printf ("%s" , "Enter degrees Fahrenheit:");
	scanf ("%lf", f);
	printf ( "%s%lf", "Degrees in Celsius is:", FahrenheitToCelsius (f));
	}
else { 
		//This else statement has a nested if statement whose else statement is the default of the program*/ 
			if ( convert == 2 ){
			printf ("%s" , "Enter degrees Celsius:");
			scanf ("%lf", c);
			printf ( "%s%lf", "Degrees in Fahrenheit is:", CelsiustoFahrenheit(c));
			}
			else { printf ( "%s", "Invalid entry!");
		}// the else of the nested if statment is the default of the program "invalid entry!"

	}
}
//fahrenheit to Celcius function
double FahrenheitToCelsius  ( double fahrenheit )
{

    return ((5/9) * (fahrenheit-32));

}
//Celsius tofahrenheit function
double CelsiustoFahrenheit (double Celsius)
{

    return ((9/5) * (Celsius + 32));
}
