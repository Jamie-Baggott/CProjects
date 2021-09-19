/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int num1 = 0;
  int num2 = 0;
  char num3 = 0;
  int *pAddress1 = NULL;
  int *pAddress2 = NULL;
  char *pAddress3 = NULL;
  pAddress1 = &num1;
  pAddress2 = &num2;
  pAddress3 = &num3;
  printf ("\n The location of num1 is at 0x%p\n", pAddress1);
  printf ("\n The location of num2 is at 0x%p\n", pAddress2); 
  printf ("\n The location of num3 is at 0x%p\n", pAddress3);
  
  printf("\n\nInt Value at address %p is %d", pAddress1, *pAddress1);
  printf("\n\nInt Value at address %p is %d", pAddress2, *pAddress2);
  printf("\n\nInt Value at address %p is %d", pAddress3, *pAddress3);
  
  //int testInterger;
  //printf("\n\nEnter an interger: ");
  //scanf("%d", &testInterger);
  //printf("Interger = %d", testInterger);
  
  //int testPhoneNum;
  //printf("\n\nEnter a Phone Number: ");
  //scanf("%010d", &testPhoneNum);
  //printf("Number = %010d", testPhoneNum);
  
  char testName[100];
  printf("\n\nEnter a Name: ");
  scanf("%s", testName);
  printf("Name = %s", testName);

  return 0;
}
