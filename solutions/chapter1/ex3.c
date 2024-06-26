#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("%s | %s\n", "Fahrenheit temperature", "temperature Celsius");

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%11.0f %12c %11.1f\n", fahr, '|', celsius);
    fahr = fahr + step;
  }
}
