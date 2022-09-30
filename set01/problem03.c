#include <stdio.h>

int input();
int sum(int,int);
void output(int,int,int);

main() {
  int first,second,ans;
  first=input();
  second=input();
  ans=sum(first, second);
  output(first, second, ans);
}

int input()  {
  int digit;
  printf("Enter a number");
  scanf("%d", &digit);
  return digit;
}

int sum(int num1, int num2) {
  int add;
  add = num1 + num2;
  return add;
}

void output(int element1, int element2, int solution) {
  printf("The sum of %d and %d is %d", element1, element2, solution);
}