/*
* Auth: Lawrence Wilson II
* Date: 09-09-23 (Due: 09-10-23)
* Course: CSCI-2240 (Sec: 850)
* Desc: PREPROJECT-01, A Simple "Hello, World" C program.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main( void ) {
/* Personalized hello. */
printf( "Hello, World, from Lawrence Wilson II!\n" );
/* Proper way to finish a program in a POSIX-system. */
exit( EXIT_SUCCESS );
} /* end main() */