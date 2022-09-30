#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

main() {
  int a, b, c, largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
}

int input() {
  int digit;
  printf("Enter a number");
  scanf("%d",&digit);
  return digit;
}

int compare(int a, int b, int c) {
  int large;
  if(a>b && a>c) {
    large=a;
  }
  else if(b>a && b>c) {
    large=b;
  }
  else if(c>a && c>b) {
    large=c;
  }
  return large;
}

void output(int a, int b, int c, int largest) {
  printf("The largest of %d %d and %d is %d",a,b,c,largest);
}