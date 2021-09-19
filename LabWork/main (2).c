/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//#include <stdio.h>

//int
//main ()
//{
  //int keyboard;
  //printf("Enter a character ");
  //keyboard = getchar();
  //printf("The input character is %d\n", keyboard);
  //printf("The input character is %c\n", keyboard);
  // printf("Enter a character ");
  //char letter = (char) getchar();
  //getchar();

  //printf("Letter entered %d\n", letter);
  //printf("Letter entered %c\n", letter);

  //char keyboard;
  //printf("Please input a character using the keyboard");
  //keyboard = (char)getchar();

  //printf("The input character is %d.\n", keyboard);
  //printf("The input character is %c.\n\t", keyboard);

  //char letterX= 'X';
  //putchar(letterX);

  //char firstInitial;
  //char secondInitial;

  //printf ("Please enter the first letter of your first name! \n");
  // firstInitial = getchar ();
  // getchar ();
  // if (firstInitial > 91)
  //{
//    firstInitial = firstInitial - 32;
//  }

//printf ("Please enter the first letter of your  surname! \n");
//  secondInitial = getchar ();
//  getchar ();
//  if (secondInitial > 91)
  //   {
  //     secondInitial = secondInitial - 32;
  //   }

//  printf ("Your initials are: ");
//  putchar (++firstInitial);
//  putchar ('.');
  // putchar (++secondInitial);
  // putchar ('.');




#include <stdio.h>

int main ()
{

  char initials[5];
  initials[0] = 'R';
  initials[1] = '.';
  initials[2] = 'D';
  initials[3] = '.';
  initials[4] = '\0';
  
  char word[4];
  word[0] = 'c';
  word[1] = 'a';
  word[2] = 't';
  word[3] = 's';


  printf("%s\n", initials);
  printf("Index 4 of our string is %d\n", initials[4]);
  
  char new_initials[] = "R.D.";
  printf("%s\n", new_initials);
  printf("Index 4 of our string is %d\n", new_initials[4]);
  
  char name[] = "Jamie";
  printf("THe size of this array is %d\n", sizeof (name));
  
  int list_of_numbers[] = {3,6,9,12,15};
  printf("The size of this array is %d\n", sizeof(list_of_numbers));
  
  return 0;


}
