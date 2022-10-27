#include <stdio.h>

struct _point {
   float x;
   float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float *res);

int main(void) {
  Point a, b;
  float res;
  a=input();
  b=input();
  // dist(a,b,&res);
  // output(a,b,res);
}

Point input() {
  Point digit;
  printf("Enter points");
  scanf("%f%f",digit.x,digit.y);
  return digit;
}