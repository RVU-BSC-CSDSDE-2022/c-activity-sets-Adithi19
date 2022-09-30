#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

main() {
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a, b);
  output(a, b, sum);
}

int input()  {
  int digit;
  printf("Enter a number");
  scanf("%d", &digit);
  return digit;
}

int add(int a, int b) {
  int solve;
  solve = a + b;
  return solve;
}

void output(int a, int b, int sum) {
  printf("The sum of %d and %d is %d", a, b, sum);
}