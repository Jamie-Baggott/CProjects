/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sum_array(){
    int i, sum, length;
    
    sum =0;
    
    printf("How many integers: ");
    scanf("%d", &length);
    int *array;
    array = malloc(sizeof(int)*length);
    
    for(i=0;i<length;i++){
        scanf("%d", &array[i]);
    }
    
    for(i=0;i<length;i++){
        sum += array[i];
    }
    return sum;
}

void main(void){
    int sum;
   // int array[7];
   sum = sum_array();
 
 // sum = sum_array(array, 7);
    
    printf("%d", sum);

    
    return 0;
}
