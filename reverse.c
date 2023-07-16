#include<stdio.h>

int  main(){
    int n,i;

    printf("Enter a number\n");
    scanf("%d",&n);
     printf("The counting in reverse is \n");
    for(i=n;i>=0;i--){
        printf("%d\n",i);
    }

    return 0;
}