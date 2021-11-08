#include<stdio.h>
void main()
{
	int a,b,c;
	a=10;
	b=5;
	c=12;
	printf("(%d<%d)&&(%d<%d) --> %d\n", a, b, a, c, (a<b) && (a<c));
	printf ("%d\n",(a>b)||(a>c));
	printf ("%d\n",(a>b)&& (a<c));
	printf ("%d",(a<b)||(a>c));
}
