/*Calculator*/
#include<stdio.h>
void main()
{
int a ,b ,c;
printf("Enter a value : ");
scanf("%d",&a);
printf("Enter b value : ");
scanf("%d",&b);
printf("1 .Addition , 2 .Subtraction , 3 .Multiplication , 4 .Division , 5 .Modulus ");
printf("\nEnter any Arithmetic operation = ");
scanf("%d",&c);
if(c==1) { printf(" a + b : %d", a+b);}
else if(c==2) { printf(" a - b : %d", a-b);}
else if(c==3) { printf(" a * b : %f", a*b);}
else if(c==4) { printf(" a / b : %d", a/b);}
else {printf(" a % b : %f", a%b);}
}