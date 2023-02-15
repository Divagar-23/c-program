/*
	Name:divagar 
	Copyright: string
	Author: fuction
	Date: 27-01-23 14:30
	Description: pointer
*/
#include<stdio.h>
void diva(char*);
int main()
{
	char array[10];
	char *p;
	int i;
	for(i=0;array[i-1]!=10;i++)
	scanf("%c",&array[i]);
	p=array;
	diva(&array);
}

	void diva( char *a)
	{
		
	 for(;*a;a++)
		printf("%c",*a);
	}
	


