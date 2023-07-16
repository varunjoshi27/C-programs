#include<stdio.h>

int main(){
    float p,r,t;

    printf("Enter the Principle amount\n");
    scanf("%f",&p);

    printf("Enter the rate of intrest \n");
    scanf("%f",&r);

    printf("Enter the time period\n");
    scanf("%f",&t);

    printf("The simple intrest is %f\n",(p*r*t)/100);
    
    return 0;
}