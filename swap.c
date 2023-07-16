#include<stdio.h>

int main(){
    int a,b,t;
    printf("Enter the value of a \n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    t=a;
    a=b;
    b=t;

    printf("The value after swapping the number \n");
    printf("The value of a becomes %d\n",a);
    printf("The value of b becomes %d\n",b);

    return 0;
}