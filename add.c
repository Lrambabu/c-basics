#include<stdio.h>
void main()
{
	int num1,num2,sum,difference,product,quotient,remainder;
	num1=20;
	num2=5;
	sum = num1+num2;
	difference = num1-num2;
	product = num1*num2;
	quotient = num1/num2;
	remainder = num1%num2;
	printf("sum of %d and %d is %d\n",num1,num2,sum);
	printf("difference of num1 and num2 is %d\n",difference);
	printf("product of num1 and num2 is %d\n",product);
	printf("division of num1 and num2 is %d\n",quotient);
	printf("division of num1 and num2 is %d",remainder);	
}
