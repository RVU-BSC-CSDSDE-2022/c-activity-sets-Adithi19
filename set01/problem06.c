#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

main() {
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
}

int input() {
  int digit;
  printf("Enter a number");
  scanf("%d",&digit);
  return digit;
}

void compare(int a, int b, int c, int *largest) {
  if(a>=b && a>=c) {
    *largest=a;
  }
  else if(b>=c) {
    *largest=b;
  }
  else if(c>=a && c>=b) {
    *largest=c;
  }
}

void output(int a, int b, int c, int largest) {
  printf("%d",largest);
}