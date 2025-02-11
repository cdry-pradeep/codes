#include <stdio.h>
int main() {
  int number, exp;
  long double result = 1.0;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("Enter exponent: ");
  scanf("%d", &exp);
  int temp = exp;
  while (temp != 0) {
    result *= number;
    --temp;
  }
  printf("%d to the power %d is: %.0Lf", number, exp, result);
  return 0;
}
