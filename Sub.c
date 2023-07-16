#include<stdio.h>
float sub(float a,float b);

int main(){
 float a,b;
  printf("Enter the value of a\n");
  scanf("%f",&a);

  printf("Enter the value of b\n");
  scanf("%f",&b);

  float s= sub(a,b);
  printf("The Sub of a and b is %f",s);
}

float sub(float a,float b){
 return a-b;
}