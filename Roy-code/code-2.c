#include <stdio.h>
int main(){
int u, a ,t;
float v, s;
printf("Enter the value of u: \n");
scanf("%d",&u);
printf("Enter the value of a: \n");
scanf("%d",&a);
printf("Enter the value of t: \n");
scanf("%d",&t);
v = u + (a*t);
s = (u*t) + (1/(2*a*t*t));
printf("Value of v = %.2f and s = %.2f",v,s);
return 0;
}