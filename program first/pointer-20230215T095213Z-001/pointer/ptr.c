/*
	Name: divagar
	Copyright: 
	Author: fuction
	Date: 27-01-23 10:18
	Description:pointer 
*/
#include<stdio.h>
int main()
{
	int a=10,b=6,c=12,d=23,*ptr;
	ptr=&a;
    ptr=&b;
    ptr=&c;
    ptr=&d;
    
	printf("\nis pointer value %d",*ptr);
	printf("\n is post %d",*ptr++); //post address incresment
	printf("\n is pinter value %d",*ptr);
	printf("\n is pre  %d",*++ptr); //pre addressincrement
	printf("\n id pointer%d",*ptr); // pointer value
    printf("\n is decre post %d",*ptr--);  // post address decre
    printf("\n is pointer value %d",*ptr);
    printf("\n is decre pree %d",*--ptr);  // pre address decr
    printf("\n is pointer value %d",*ptr);   //pointer valu
    printf("\n is pre %d",++*ptr);   //pre  value pointer
   printf("\n is dec pos %d" ,--*ptr);  //pre val pointer decre	
}
