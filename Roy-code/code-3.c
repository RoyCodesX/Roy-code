#include <stdio.h>
int main(){
float pi,area,circumference;            int r;
pi= 3.141;
printf("Enter radius of circle: \n");
scanf("%d",&r);
area = pi*r*r;
circumference = 2*pi*r;
printf("Area = %.3f and Circuference = %.3f",area,circumference);
return 0;
}