/*
 * Auth: Lawrence Wilson II
 * Date: 9/15/23 (Due:09/17/23)
 * Course: CSCI-2240 (Sec:850)
 * Desc:   PROG-02, The Basics
*/
#include<stdio.h>

int main( void )
{
    float floatnum;
    int intnum;
    char c;

    printf("Welcome to the silly basic C Program!\nYou will be asked a series of questions...\n...and I will repeat what you entered!\n\n");
    printf("Ready?\n\n");
    printf("Enter a floating point number: ");
    scanf("%f", &floatnum );
    printf("Great!\n");
    printf("Now enter an integer (can be signed): ");
    scanf("%d", &intnum);
    printf("Great!\n");
    printf("Now enter a single character: ");
    scanf(" %c", &c );
    printf("Great! Here are the results:\n       Your floating-point number was: %f\n       Your integer number was: %d\n       Your character was: %c \n\n",floatnum,intnum,c);
    
 


    return 0;

}