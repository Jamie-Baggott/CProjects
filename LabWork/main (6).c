/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    char chmatrix[4][4];
    char input = 0;
    int num_chars = 0;
    int row = 0;
    int col = 0;
    int i;
    
    printf("Enter something \n");
    
    while(input != '\n'){

        input = getchar();
        if(input == '\n') break;
        
        chmatrix[row][col] = input;
        col += 1;
        num_chars += 1;
        
        if (col ==4){
            row += 1;
            col = 0;
            if (row == 4){
                while(input != '\n'){
                    input = getchar();
                }
                break;
            }
        }
    }
    
    for(i =num_chars;i<16;i++){
        chmatrix[row][col] = '#';
        col += 1;
        if (col ==4){
            row += 1;
            col = 0;
            if (row == 4){
                break;
            }
        }
    }
    for (row = 0; row < 4; row++){
        for (col = 0; col < 4; col++){
            printf("%c ", chmatrix[row][col]);
        }
        printf("\n");
    }


    printf("Search for char: ");
    input = getchar();
    getchar();
    printf("The coordinates of %c are \n", input);
    
    for (row = 0; row < 4; row++){
        for (col = 0; col < 4; col++){
            if (input == chmatrix[row][col]){
                printf("(%d, %d)\n",row, col);
                
            }
        }
    }
    
    for (row = 0; row < 4; row++){
        for (col = 0; col < 4; col++){
            if (input == chmatrix[row][col]){
                printf("(%d, %d) (%d, %d)\n(%d, %d) (%d, %d) \n",&row - 1, &col - 1, &row, &col -1, &row - 1, &col, &row, &col);
            }
        }
    }
             
    
    return 0;
}
