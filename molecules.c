/* 
 *  Auth: Lawrence Wilson II
 *  Date: 09-23-23, 2023 (Due: 09-24-23)
 *  Course:  CSCI- 2240 (Sec: 850)
 * DESC: Prog-03, Number of Water Molecules.
*/
#include <stdio.h>


int main(void) {
    float qts; 
    float total_moles;
    const float  mass_H20 = 3.0e-23;
    const float  qtgrams = 950;
    printf("*** Water Molecules Counter ***\n");
    printf("Enter water quantity (in qt): ");
    scanf("%f",&qts);
    total_moles = (qts * qtgrams)/ mass_H20;
    printf("Total Numer of Molecules = %.2E \n",total_moles);
    printf("\n");
    
    return 0;
}