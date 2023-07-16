#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the value for table\n");
    scanf("%d",&n);

    printf("The table is \n");
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n ", n ,i ,n*i);
    }

    return 0;
}