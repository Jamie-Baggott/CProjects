/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int
main ()
{
//  int num1 = 0xFFFF;
//  printf ("num1 has a value of %d : %x\n", num1, num1);

//  int bytesnum1 = sizeof (num1);
//  int bitsnum1 = bytesnum1 * 8;

//  printf ("num1 use %d bytes: %d bits\n", bytesnum1, bitsnum1);

//  int minvalue = INT_MIN;
//  int maxvalue = INT_MAX;

//  printf ("The Min/Max value in num is %d %d\n", minvalue, maxvalue);


//  printf ("Please input text as upper or lower case... \nInput: ");
//  char input;
//  while (1)
//    {
//      input = getchar ();

//      if (input == '\n')
//      break;
//
//     if ((input <= 'Z') && (input >= 'A'))
//      {
//        putchar (input + 32);
//      }
//      else if ((input <= 'z') && ('a'))
//      {
//        putchar (input - 32);
//      }
//      else
//      {
//        putchar (input);
//      }

  int array[5][5];
  int row, col;


  for (row = 0; row < 5; row++)
    {
      for (col = 0; col < 5; col++)
	{
	  array[row][col] = 0;

	}

    }

  char x, y, value;
  while (1)
    {
      printf ("What X Location? ");
      x = getchar () - '0';
      getchar ();
      printf ("What Y Location? ");
      y = getchar () - '0';
      getchar ();
      printf ("What value do you want to assign? ");
      value = getchar () - '0';
      getchar ();

      array[y - 1][x - 1] = value;

      printf ("Do you want to continue? y for yes, b for no\n");
      if (getchar () == 'n')
	{
	  break;
	}
      getchar ();
    }

  printf ("\n");
  for (row = 0; row < 5; row++)
    {
      for (col = 0; col < 5; col++)
	{
	  printf ("%02d ", array[row][col]);
	}
      printf ("\n");

    }




  return 0;
}
