/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   // int number = 31;
   // char letter = 'A';
     int start = 0;
    int i = 0;
    for (i = start; i <= 255 ; i++ )
    {
        //printf("%d   %x \n", i, i ); 
        printf("%x ", i );
        if ((i+1)%16 == 0)
        {
         printf("\n")   ;
        }
        
    }

    
   // printf("\nPrinting Variables");
  //  printf("\n number is\t %d : %x\n", number, number);
   // printf("\n letter is\t %c : %x\n", letter, letter);
  //  printf("\n letter is\t %c : %d %x\n", letter, letter, letter);
  //  printf("Amount of memory used");
  //  printf("\n No. of bytes for an int is\t %d : \n", sizeof(number));
    
    return 0;
    
}
