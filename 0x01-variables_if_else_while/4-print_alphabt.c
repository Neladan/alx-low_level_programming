#include <stdio.h>

int main(void)
{
  char c;
  for(c = 0; c <= 'z'; ++c)
    {
      if (c != 'e' && c != 'q')
	putchar(c);
    }

  putchar('\n');

  return (0);
}
