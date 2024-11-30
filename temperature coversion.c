#include <stdio.h>
void main() {
  float far, cel;
  printf("Enter the temperature in Fahrenheit:");
  scanf("%f", &far);
  cel = (far - 32.0) * (5.0 / 9.0); 
  printf("The Celsius is %.2f\n", cel);
  float cel2, far2;
  printf("Enter the temperature in celsius:");
  scanf("%f", &cel2);
  far2 = (cel2 * 9/5) + 32;
  printf("The far is %.2f\n", far2);
}
