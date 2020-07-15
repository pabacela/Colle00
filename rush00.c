#include "ft_putchar.c"

void rush(int x, int y)
{
  char c;
  int r =0;
  while ( r < y)
  {
	  int s =0;
      while ( s < x)
	  {
        if ((r == 0 || r == y-1) && (s == 0 || s== x-1))
		{
          c='o';
		}
        else if (r == 0 || r == y-1)
		{
          c = '-';
		}
        else if (s ==0 || s == x-1)
		{
          c = '|';
		}
        else
		{
		   	c = ' ';
		}
          ft_putchar(c);
		  s++;
	  }
	  r++;
      ft_putchar('\n');
  }
}

