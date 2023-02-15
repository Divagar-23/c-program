/*name:divagar
date:23.1.23
topics:function*/
#include<stdio.h>
int bond(int ,int);
//int fun(int,int);

int main()
{
	int result1,c,d,result2;
	printf("hai buddy:");
 result1=bond(5,6);
	printf("\n%d", result1);
	result2=fun(4,5);
	printf("\n%d",result2);
	
}
int bond (int y,int m)
{
	int c=0;
	c=y+m;
	return y+m;	
}
int fun  (int s,int v)
{
	int d=0;
	d=s*v;
	return s*v;
}
