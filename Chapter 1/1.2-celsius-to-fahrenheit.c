#include <stdio.h>

main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  celsius = lower;
  while (celsius < upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f\t%3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
