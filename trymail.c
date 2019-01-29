#include <stdio.h>

int
main ()
{
  char id[100];
  int i, j, k, count, l, a = 0, c = 0;
  scanf ("%s", id);
  for (i = 0; id[i] != '\0'; i++);
  count = i;
  if ((id[i - 1] == 109) && (id[i - 2] == 111) && (id[i - 3] == 99)&& (id[i - 3] == 46))
    {
      for (j = 0; id[j] != 64; j++);
      if (j >= 3)
	{
	  for (k = 0; k <= j; k++)
	    {
	      if (!(id[k] >= 65 && id[k] <= 91) && (id[k] != 32)
		  && (id[k] != 64) && (id[k] != 46))
		{
		  a++;
		}
	    }
	  if (a == j)
	    {
	      for (l = j - 1; id[l] != 46; l++)
		{
		  c++;
		}
	      if (c > 5)
		{
		  printf ("valid");
		}
	      else
		{
		  printf ("invalid1");
		}
	    }
	  else
	    {
	      printf ("invalid2");
	    }
	}
      else
	{
	  printf ("invalid3");
	}

    }
  else
    {
      printf ("invalid4");
    }

  return 0;
}
