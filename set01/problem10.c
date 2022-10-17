#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

main() {
  char string1[20], string2[20];
  int result;
  input_two_strings(&string1, &string2);
  result=stringcompare(string1, string2);
  output(string1, string2, result);
}

void input_two_strings(char *string1, char *string2) {
  printf("Enter the first string:");
  scanf("%s",string1);
  printf("Enter the second string:");
  scanf("%s",string2);
}

int stringcompare(char *string1, char *string2) {
  int i,res;
  res=0;
  for(i=0;i<20;i++) {
    if(string1[i]==string2[i]) {
      res=0;
    }
    else {
    if(string1[i]>string2[i]) {
      res=1;
      break;
    }
    else if(string2[i]>string1[i]){
      res=2;
      break;
    }
  }
    if(string1[i]=='\0' || string2[i]=='\0') {
      break;
    }
  }
  return res;
  }
  
  
void output(char *string1, char *string2, int result) {
  if (result==1) {
    printf("%s is greater than %s",string1, string2);
  }
  else if (result==2){
    printf("%s is greater than %s",string2, string1);
  }
  else if (result==0) {
    printf("The strings are equal");
  }
}



