// sscanf reads the data from sentence in the format string *string integer and stores it to str.
// Here *string is to ignore that string or number
// sscanf (sentence,"%*s %s %d",str,&i) would have resulted is -> 12

#include <stdio.h>

int main ()
{
  char sentence []="Rudolph is 12 years old";
  char str [20];
  int i;

  sscanf (sentence,"%s %*s %d",str,&i);
  printf ("%s -> %d\n",str,i);
  
  return 0;
}

//Output
// Rudolph -> 12