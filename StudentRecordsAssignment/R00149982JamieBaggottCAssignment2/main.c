//R00149982 Jamie Baggott C Assignment 2


#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

FILE *fp;
//char filepath[] = ("test_file"); this is just here for quick testing 

char line[150];
int i = 0;
int j = 0;

struct student
{
  char firstname[100][150];
  char surname[100][150];
  char coursename[100][150];

  char initial[100][150];
  char group[100][150];

  int year[100];
  int average[100];
};


fileOpen ()
{
  if (fp == NULL)
    {
      printf ("Error opening file\n");
      exit (1);
    }
  else
    {
      printf ("\nFile found\n");
      printf
	("\n/////////////////////////////////////////////////////////////////////////////");
    }
}

int
printStudentDetails ()
{
  int c;
  struct student st[20];

  while (fgets (line, 150, fp))
    {
      if (i < 20)
	{
	  i++;

	  printf
	    ("\n/////////////////////////////////////////////////////////////////////////////\n");
	  printf
	    ("-----------------------------------------------------------------------------");
	  printf ("\n\tEntry number %d:\n", i);
	  printf
	    ("-----------------------------------------------------------------------------");

	  sscanf (line, "%s (%c) %s %d %s %c %d", &st[c].firstname[j],
		  &st[c].initial[j], &st[c].surname[j], &st[c].year[j],
		  &st[c].coursename[j], &st[c].group[j], &st[c].average[j]);

	  printf ("\n\tFirst Name: %s Initial:%s  Surname:%s\n",
		  st[c].firstname[j], st[c].initial[j], st[c].surname[j]);
	  printf
	    ("-----------------------------------------------------------------------------");
	  printf ("\n\tYear: %d Course: %s Group: %s Average: %d\n",
		  st[c].year[j], st[c].coursename[j], st[c].group[j],
		  st[c].average[j]);
	  printf
	    ("-----------------------------------------------------------------------------");
	  j++;
	  printf
	    ("\n/////////////////////////////////////////////////////////////////////////////");
	}
      if (i >= 20)
	{
	  printf
	    ("\n/////////////////////////////////////////////////////////////////////////////");
	  printf
	    ("\n\tAll complete student records are printed.\n\tThank you for using the program.");
	  printf
	    ("\n/////////////////////////////////////////////////////////////////////////////");
	  printf
	    ("\n/////////////////////////////////////////////////////////////////////////////");

	  fclose (fp);
	}
    }
}




int
main (int argc, char *argv[])
{
  int i;
  if (argc >= 2)
    {
      printf ("The filepath is: ");
      for (i = 1; i < argc; i++)
	{
	  printf ("%s\t\n", argv[1]);
	}
    }
  else
    {
      printf ("argument list is empty.\n");
    }
  fp = fopen (argv[1], "r");


  fileOpen ();

  printStudentDetails ();

  return 0;

}
