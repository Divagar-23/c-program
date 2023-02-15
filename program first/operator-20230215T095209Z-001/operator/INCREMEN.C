/*name:divagar
 date:3.1.23
 topics:increment and decrement*/
#include<stdio.h>
#include<conio.h>
 int main()
{
 int num1,num2,num3,num4;
// clrscr();
 scanf("%d%d",&num1,&num2);
 num3=num1++;
 num4=++num2;
 printf("\n num1++=%d",num3);
 printf("\n num1=%d",num1);
 printf("\n ++num2=%d",num4);
 printf("\n num2=%d",num2);
 //getch();
}
