#include<stdio.h>
int main(){
int a,b,c;
printf("Enter 1st number: \n");
scanf("%d",&a);
printf("Enter 2nd number: \n");
scanf("%d",&b);
c = a+b;
printf("Addition of %d and %d is %d \n",a,b,c);
c = a-b;
printf("Subtraction of %d and %d is %d \n",a,b,c);
c = a/b;
printf("Divition of %d and %d is %d \n",a,b,c);
c = a*b;
printf("Multiplication of %d and %d is %d \n",a,b,c);
return 0;
}