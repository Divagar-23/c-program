/*
	Name:divagar 
	Copyright: 2d 
	Author: aadition
	Date: 28-01-23 14:26
	Description: pointer
*/
#include<stdio.h>
int mat(int *,int *);
int main()
{
	int i,A[50],B[50],n;
	int *a,*b;
	printf("enter the matrix value:");
	scanf("%d",&n);
	
	printf("enter the 1st matrix:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
    }
    printf("enter the 2st matrix:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&B[i]);
	}
	a=A;
	b=B;
	mat(&A,&B);
}
int mat(int *x,int *y)
{
	printf("\n\t%d",(*x+*y));
	printf("\t%d",((*++x)+(*++y)));
	printf("\n\t%d",((*++x)+(*++y)));
	 printf("\t%d",((*++x)+(*++y)));
}

