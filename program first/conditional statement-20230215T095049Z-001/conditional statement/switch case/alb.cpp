/*name:divagar
 date:6.1.23
 topics:switch conditions*/
#include<stdio.h>
//#include<conio.h>
  int main()
  {
  int num1,num2,num3;
  char cal;
 // clrscr();
  printf("enter the two numbers:");
  scanf("%d%d %c",&num1,&num2,&cal);
  switch(cal)
   {
    case '+':
	     {
	      num3=num1+num2;
	      printf("%d",num3);
	      break;
	      }
     case '-':
	     {
	      num3=num1-num2;
	      printf("%d",num3);
	      break;
	      }
     case '*':
	     {
	      num3=num1*num2;
	      printf("%d",num3);
	      break;
	      }
     case '/':
	     {
	      num3=num1/num2;
	      printf("%d",num3);
	      break;
	      }
     case '%':
	     {
	      num3=num1%num2;
	      printf("%d",num3);
	      break;
	      }
     default:
	  {
	  printf("hello divagar");
	  }
   }
 // getch();
  }

