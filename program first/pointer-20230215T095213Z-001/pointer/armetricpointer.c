/*name:dvagar
date:26.1.23
topics:poniter*/
#include<stdio.h>
int main()
{
	int a=23,b=12,c=0;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("address of the p1 is %d",&p1);
	printf("\naddress of the p2 is %d",&p2);
	printf("\n value of the p1 is %d",*p1);
	printf("\n value of the p2 is %d",*p2);
	p3=*p1+*p2;
	printf("\n the total value p1+p2=%d",p3);
	p3=*p1-*p2;
	printf("\n the total value p1-p2=%d",p3);
	p3=*p1**p2;
	printf("\n the total vaue=%d",p3);
	p1++;
	printf("\n%d",p1);
	p2--;
	printf("\n%d",p2);
}
