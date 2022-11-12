#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main() {
  float radius, height, length, weight;
  input_camel_details(&radius, &height, &length);
  weight=find_weight(radius, height, length);
  output(radius, height, length, weight);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length) {
  printf("Enter stomach radius of the camel: ");
  scanf("%f",&*radius);
  printf("Enter height of the camel: ");
  scanf("%f",&*height);
  printf("Enter length of the camel: ");
  scanf("%f",&*length);
}

float find_weight(float radius, float height, float length) {
  float wgt, product,ini,sqr_pro,nw,pi;
  product=height*length;
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
  wgt= pi * (radius*radius*radius) * sqr_pro;
  return wgt;
}

void output (float radius, float height, float length, float weight) {
  printf("The weight of the camel with radius: %f, height: %f and length: %f is %f \n", radius, height, length, weight);
}