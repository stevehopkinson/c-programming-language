#include <stdio.h>

main()
{
  int c;
  
  while ((c = getchar()) != EOF) {
      putchar(c);
      while ((c = getchar()) == ' ')
        ;
      putchar(c);
  }
  putchar('\n');
}
