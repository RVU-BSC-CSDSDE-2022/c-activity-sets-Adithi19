#include <stdio.h>

int input();
int add(int a,int b);
void output(int a,int b,int sum);

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

int add(int num1, int num2) {
  int solve;
  solve = num1 + num2;
  return solve;
}

void output(int element1, int element2, int solution) {
  printf("The sum of %d and %d is %d", element1, element2, solution);
}