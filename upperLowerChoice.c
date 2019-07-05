{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fswiss\fcharset0 Arial;}}
{\*\generator Msftedit 5.41.15.1507;}\viewkind4\uc1\pard\f0\fs20 /******************************************************************************************/\par
/*    upperOrLower.c                                                                                  */\par
/*    Geoffrey Hoffman\tab\tab\tab\tab\tab\tab\tab   */\par
/*    18 August 2013\tab\tab\tab\tab\tab\tab\tab  */\par
/*     CIS126  Unit 4 Assignment 2\tab\tab\tab\tab\tab */\par
/* Program to convert a character string to either upper or lower case         */ \par
/**************************************************************************************/\par
#include <stdio.h>\par
#include <ctype.h>\par
\par
void upper (char*);\tab  //function prototype to convert string to uppercase\par
void lower (char*);\tab  //function prototype to convert string to lowercase\par
\par
int main ()\par
\{\par
\par
char arrays[100]; //character defined;\par
\par
int lUchoice = 0; // selection variable "lUchoice defined;\par
\par
/* This section of main asks for the string to convert and then\par
 prints a menu to select whether it will be converted to upper or lower case*/\par
\par
printf ( "%s", "Enter a string to convert:") ;\par
gets(arrays);\par
\par
printf("%s", "Would you like to convert to Upper or lower case?(1 or 2)\\n");\par
\par
printf ("%s","1. UPPERCASE\\n");\par
\par
printf ("%s","2. lowercase\\n");\par
\par
scanf ( "%d", &lUchoice);\par
\par
/**************this switch block selects the function to call ( lower or upper)******************/\par
\par
switch (lUchoice)\par
    \{\par
    case 1:\par
\par
        upper (arrays);\par
\par
        break;\par
    case 2:\par
\par
        lower (arrays);\par
\par
        break;\par
    default:\par
        printf("%s", "invalid entry");\par
    \}\par
return 0;\par
\}\par
\par
/*********these are the functions ( modules ) that convert the string to either upper case or lower case.********/\par
\par
void  lower (char *arrays )\par
\{\par
   int i=0;\par
    char c;\par
  while (arrays[i])\par
  \{\par
    c= arrays[i];\par
    putchar (tolower(c));\par
    i++;\par
  \}\par
 printf ( " Entered string in lowercase is \\"%s\\"\\n", *arrays) ;\par
\par
\}\par
\par
\par
\par
void upper (char *arrays)\par
\{\par
int i=0;\par
char c;\par
  while (arrays[i])\par
  \{\par
    c= arrays[i];\par
    putchar (toupper(c));\par
    i++;\par
    \}\par
    printf( " Entered string in UPPERCASE is \\"%s\\"\\n", *arrays) ;\par
\par
\}\par
\par
\par
\par
\par
}
 