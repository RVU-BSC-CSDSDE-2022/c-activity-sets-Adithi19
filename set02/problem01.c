#include <stdio.h>

struct _point {
  float x;
  float y; 
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main() {
  Point a,b;
  float res;
  a=input();
  b=input();
  dist(a, b, &res);
  output(a, b, res);
  return 0;
}

Point input() {
  Point digit;
  printf("Enter the points");
  scanf("%f%f",&digit.x,&digit.y);
  return digit;
}

void dist(Point a, Point b, float *res) {
  float distx,disty,dist,ini,nw;
  distx=(b.x-a.x)*(b.x-a.x);
  disty=(b.y-a.y)*(b.y-a.y);
  dist=distx+disty;
  ini=1.0;
  for(;;) {
    nw=(ini+(dist/ini))/2.0;
    if(nw==ini) {
      *res=nw;
      break;
    }
    else {
      ini=nw;
    }
  }
}

void output(Point a, Point b, float res) {
  printf("The distance between (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,res);
}