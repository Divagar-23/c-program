/*name:divagar
date:26.1.23
topics:pointer*/
#include<stdio.h>
int main()
{
	int a=29,b=34,c=0;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("p1=%d\n",p1);
	printf("p2=%d\n",p2);
	p3=*p1/ *p2;
	p2--;
	p1++;
	printf("p3=%d\n",p3);
    printf("p2--=%d\n",p2);
	
}
