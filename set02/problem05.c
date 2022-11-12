#include <stdio.h>

int input();
float borga_x(int x);
void output(int x, float result);

int main() {
  int x;
  float result;
  x=input();
  result=borga_x(x);
  output(x, result);
  return 0;
}

int input() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}

float borga_x(int x) {
  float borga,nw,old;
  float power,factorial,f_product,p_product;
  int k,j;
  power=1.0;
  factorial=3.0;
  borga=0.0;
  f_product=1.0;
  p_product=1.0;
  while(1) {
    old=borga;
    for(k=1;k<=power;k++) {
      p_product=x*p_product;
    }
    for(j=1;j<=factorial;j++) {
      f_product=j*f_product;
    }
    borga=p_product/f_product;
    nw=borga+old;
    power=power+1;
    if(factorial==x) {
      break;
    }
    factorial=factorial+2;
    f_product=1;
    p_product=1;
  }
  nw=nw+1;
  return nw;
}

void output(int x, float result) {
  printf("borga(%d) = %f \n",x, result);
}