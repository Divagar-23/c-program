/*
	Name: divagar
	Copyright: 
	Author: 
	Date: 26-01-23 15:07
	Description:array passing 
*/
#include<stdio.h>
int main()
{
	int a=2,b=3,c=4;
	int *p;
	p=&a;
	p=&b;
	p=&c;
	
	printf("the pointer is\n%d\n%d\n%d",*p,*p++,*p++);
	printf("\n the address of pointera,b,c is :\n%d\n%d\n%d",p,p++,p++);
	printf("\nthe address of a is %d",&a);
	printf("\nthe address of b is %d",&b);
	printf("\nthe address of c is %d",&c);
}

