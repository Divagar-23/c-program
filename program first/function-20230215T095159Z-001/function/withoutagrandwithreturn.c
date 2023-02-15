/*name:divagar
date:23.1.23
topics:function*/
#include<stdio.h>
int manfree();
void manfree1(int,int);
int main()
{
	int result,c;
	result=manfree();
	result+=10;
	printf("%d",result);
	manfree(5,6);
}
 int manfree()
{
	int value1,value2,c;
	printf("enter the value add:");
	scanf("%d%d",&value1,&value2);
	c=value1+value2;
	return c;
}
void manfree1(int value1,int value2)
{
	printf("the addition of r/s v1,v2:");
}
