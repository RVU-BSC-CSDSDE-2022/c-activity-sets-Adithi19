//To find all the prime numbers between 2 to n Eratosthenes Sieve method

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main() {
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  // erotosthenes_sieve(n,a);
  // output(n,a);
  return 0;
}

int input_array_size() {
  int elements;
  printf("Enter the number of elements for the array: ");
  scanf("%d",&elements);
  return elements;
}

void init_array(int n, int a[n]) {
  int i;
  for(i=1;i<=n;i++) {
    a[i]=i;
  }
}

void erotosthenes_sieve(int n, int a[n]) {
  
}