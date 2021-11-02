#include<stdio.h>
void main()
{
	int s,n,en,od;
	n=20;
	s=n*(n+1)/2;
	en=n*(n+1);
	od=(n*n);
	printf("sum of first %d natural numbers:%d\n",n,s);
	printf("sum of first %d even natural numbers %d\n",n,en);
	printf("sum of first %d odd natural numbers %d",n,od);
}
