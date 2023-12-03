#include <stdio.h>
/*
 * Auth: Lawrence Wilson
 * Date: 10-07-2023  (Due: 10-08-23)
 * Course: CSCI-2240 (Sec: 251)
 * Desc: Prog-05, Days to Weeks Program. 
 */ 

int main(void)
{
    int days;
    int days_rem; 
    int weeks; 
    const int days_per_week= 7;
    
    printf("*** Days to Weeks Program ***\n");
    printf("Enter the number of days (or 0 to quit): ");
    scanf("%d",&days);
    while (days > 0 )
    {
        weeks = days / days_per_week;
        days_rem = days % days_per_week;
        printf("%d days amounts to: %d weeks, %d days.\n",days,weeks,days_rem);
        printf("\n");
        printf("Enter the number of days (or 0 to quit): ");
        scanf("%d",&days);
        
    }
    printf("Thank you for playing!");
    return 0;
}