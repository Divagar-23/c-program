/*name:divagar
date:26.1.23
topic:pointer swaping*/
#include<stdio.h>
int main()
{
	int a=10,b=23,c;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("address of p1 is %d",&p1);
	printf("address of p2 is %d",&p2);
	printf("\n value isp1 %d",*p1);
	printf("\n  value is p2 is %d",*p2);
	c= *p1;
	*p1= *p2;
	*p2= c;
	printf("\n%d\n%d",*p1,*p2,c);
}
