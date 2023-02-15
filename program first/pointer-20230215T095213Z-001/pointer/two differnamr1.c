/*
	Name: Divagar
	Copyright: 
	Author: two string
	Date: 28-01-23 10:15
	Description: pointer
*/
#include<stdio.h>
void string(char*);
void string1(char*);
int main()
{
	char array[50];
	char * p;
	int i;
	for(i=0;array[i-1]!=10;i++)
	scanf("%c",&array[i]);
	p=array;
	string(&array);
	string1(&array);	
}
void string(char *a)
{
while (*a!=32)
 {
   printf("%c",*a);
   a++;	
 }
}
 void  string1(char *b)
 {
 while(*b!=32)
 {
    //printf("%c",*b);
 	b++;
 }
 	while(*b!=10)
 	{
 		printf("%c",*b);
 		b++;
	 }
}

