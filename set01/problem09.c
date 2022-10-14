#include <math.h>
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

main(void) {
  float n, sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n, sqrroot);
}

float input() {
  float digit;
  printf("Enter a number");
  scanf("%f",&digit);
  return digit;
}

float square_root(float n) {
  float sqr;
  sqr = sqrt(n);
  return sqr;
}

void output(float n, float sqrroot) {
  printf("The square root of %f is %f", n , sqrroot);
}