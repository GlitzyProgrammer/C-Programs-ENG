/*
*  Auth: Lawrence Wilson
*  Date: 11-30-23  Due 01-03-23
*  Course: CSCI-2240 (Sec: 850)
*  Desc:  Prog 07,  Matrix Operations
*
*/
#include <stdio.h>
/* Symbolic Constants */
#define ROWS 3
#define COLS 3

/* Functions that implement the matrix operations */
void scalar_mlt3x3(const float k, const float A[ROWS][COLS], float R[ROWS][COLS]);
void matrix_add3x3(const float A[ROWS][COLS],  const float B[ROWS][COLS], float R[ROWS][COLS]);
void matrix_sub3x3(const float A[ROWS][COLS],  const float B[ROWS][COLS], float R[ROWS][COLS]);

/* Functions which perform I/O operations and Display*/
void ask_matrix3x3( const char *msg, float M[ROWS][COLS]);
void ask_scalar(const char *msg, float *k);
int print_menu_and_get_choice(void);
void print_matrix3x3(const char *msg,const float M[ROWS][COLS]);
void flush_linebuffer(void);

void matrix_add3x3(const float A[ROWS][COLS],  const float B[ROWS][COLS], float R[ROWS][COLS]){
    int i;
    int j;
    for ( i = 0; i < 3; ++i) {
        for ( j = 0; j < 3; ++j) {
            R[i][j] = A[i][j]+ B[i][j];
        }
    }
    printf("Result = \n");
    for (i = 0; i < 3; ++i) {
        for ( j = 0; j < 3; ++j) {
            printf("%.2f ", R[i][j]);
        }
       printf("\n"); 
    }
   
    return; 
}
void  scalar_mlt3x3(const float k, const float A[ROWS][COLS], 
    float R[ROWS][COLS]) {
    int i;
     int j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            R[i][j] = A[i][j]*k;
        }
    }
     printf("Result = \n");
    for ( i = 0; i < 3; ++i) {
        for ( j = 0; j < 3; ++j) {
            printf("%.2f ", R[i][j]);
           
        }
        printf("\n");
    }
    return; 
}
 
void matrix_sub3x3(const float A[ROWS][COLS],  const float B[ROWS][COLS], float R[ROWS][COLS]){
     int i;
     int j;
     for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            R[i][j] = A[i][j]- B[i][j];
        }
    }
    printf("Result = \n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%.2f ", R[i][j]);
        }
       printf("\n"); 
    }
   
    return; 
}
void flush_linebuffer(void){
    while( getchar() != '\n'){
        continue; 
    }
}
void ask_scalar(const char *msg, float *k) {
    int value;
    printf("%s", msg);
   do{
       value = scanf("%f", k);
       flush_linebuffer();
       if (value != 1 ){
        printf("ERROR: Scalar entry. Try again! ");
       }  
   } while (value!= 1);
   
    return; 
}

int print_menu_and_get_choice(void){
    int selection,checker;
    int value = 1;
    printf("\n");
    printf("Matrix Operations Menu:\n\n");
    printf("\t[1] Scalar Multiplication\n");
    printf("\t[2] Matrix Addition\n");
    printf("\t[3] Matrix Subtraction\n");
    printf("\t[4] Exit\n\n");
    printf("Please make a selection and press [Enter]: ");
    while(value == 1){
        checker = scanf("%d",&selection);
        flush_linebuffer();
        if(checker!=1){
            printf("Invalid selection. Try again! ");
        }
        else if(selection>4 || selection<1) {
             printf("Invalid selection. Try again! ");
        }
        else{
            break;
        }
    }
   
    return selection;
}
void ask_matrix3x3( const char *msg, float M[ROWS][COLS]){
    printf("%s", msg);
    
    int amount; 
    int value = 1; 
    while(value == 1){
        amount = scanf("[");
        amount += scanf("%f %f %f %f %f %f %f %f %f",
             &M[0][0],&M[0][1],&M[0][2],
             &M[1][0],&M[1][1],&M[1][2],
             &M[2][0],&M[2][1],&M[2][2]);
        amount += scanf("]");
        flush_linebuffer();
        if(amount != 9) {
              printf("ERROR: Matrix entry. Try again!\n");
              printf("%s", msg);
            }
        else{
             break; 
            }
     }
     return;
}
int main(void) {
    
    float A[ROWS][COLS], B[ROWS][COLS], R[ROWS][COLS];
    float k;
    int choice; 
    
    printf("*** Matrix Ops, ver. 0.1 ***\n");
    while(  (choice = print_menu_and_get_choice()) != 4 ){
        /* Take action based on selection */
        
        switch( choice ){
            
            case 1: /* Scarlar Multiplication */ 
              /* TODO BY STUDENT! */
               ask_scalar("Please enter a scalar value: ", &k);
           
               ask_matrix3x3("Please enter a matrix:", A);
               scalar_mlt3x3( k,  A,  R);
            
               break; 
        
            case 2:  /* Matrix Addition */ 
              /* TODO BY STUDENT! */ 
              ask_matrix3x3("Please enter a matrix A:", A);
              flush_linebuffer();
              ask_matrix3x3("Please enter a matrix B:", B);
              flush_linebuffer();
              matrix_add3x3( A, B, R);
              break;
             case 3: /* Matrix Subtraction */ 
            
             /* TODO BY STUDENT! */ 
             ask_matrix3x3("Please enter a matrix A:", A);
      
             ask_matrix3x3("Please enter a matrix B:", B);
             
             matrix_sub3x3( A, B, R);
             break; 
             
             default:
                printf("ERROR: Whoops!  Unrecongnized choice.\n\n");
             
        }   /* end switch */
    }    /* end while() */ 
    
    printf("\nThank you for playing.\n\n");

    return 0;
} /*end main() */