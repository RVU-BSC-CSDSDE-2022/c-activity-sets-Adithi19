#include <stdio.h>

struct camel {
   float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

int main() {
  Camel c;
  c=input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input() {
  Camel attri;
  printf("Enter stomach radius of the camel: ");
  scanf("%f",&attri.radius);
  printf("Enter height of the camel: ");
  scanf("%f",&attri.height);
  printf("Enter length of the camel: ");
  scanf("%f",&attri.length);
  return attri;
}

void find_weight(Camel *c) {
  float product,ini,sqr_pro,nw,pi;
  product=(*c).height * (*c).length;
  pi =3.14;
  ini=1.0;
  while(1) {
    nw=(ini+(product/ini))/2;
    if(ini==nw) {
      sqr_pro=nw;
      break;
    }
    else {
      ini=nw;
    }
  }
  (*c).weight= pi * ((*c).radius * (*c).radius * (*c).radius) * sqr_pro;
}

void output(Camel c) {
  printf("The weight of the camel with radius: %f, height: %f and length: %f is %f \n", c.radius, c.height, c.length, c.weight);
}