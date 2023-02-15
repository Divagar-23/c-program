/*
	Name:divagar 
	Copyright: 
	Author: two array
	Date: 28-01-23 11:37
	Description: pointer
*/
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	int *p;
	printf("enter the 2d array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	p=&a[0][0];
	printf("element of 2d array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",*(p+i*3+j));
		}
		printf("");
	}
	getch();
}

