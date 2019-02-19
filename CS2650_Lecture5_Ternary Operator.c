/*
 ============================================================================
 Name        : CS2650_Lecture5_Ternary.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/**********************************************/
//Ternary Operator - Can use in place of if/else or switch
#include <stdio.h>
main()
{
   int a , b;
   a = 10;
   printf( "Value of b is %d\n", (a == 1) ? 20: 30 );
   printf( "Value of b is %d\n", (a == 10) ? 20: 30 );
}
