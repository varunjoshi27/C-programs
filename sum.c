#include<stdio.h>
 int sum( int a,int b);

 int main(){
   int a,b;
   printf("Enter the value of a\n");
   scanf("%d",&a);

   printf("Enter the value of b\n");
   scanf("%d",&b);

   int s=sum(a,b);

   printf("The Sum of a and b is %d\n",s);
 }
  
  int sum(int a,int b){
 return a+b;
  }
