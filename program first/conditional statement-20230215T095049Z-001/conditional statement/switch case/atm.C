/*name:diVagar
 date:5.1.23
 topics:nested condition*/
#include<stdio.h>
#include<conio.h>
int  main()
{
 char username;
 int password,option;
 //clrscr();
 printf("enter the username");
 scanf(" %c",&username);

  if(username=='d')
  {   printf("enter the password");
      scanf("%d",&password);
    if(password==2)
    {
      printf("option,1.withdraw,2.bank balance,3.deposite");
      printf("enter the opition");
      scanf("%d",&option);
      if(option==1)
      {  printf("withdraw");
      }
      else if(option==2)
      {
	  printf("bank balance");
      }
      else if(option==3)
      {
	 printf("deposite");
      }
    }
    else
    {
       printf("wrong password");
    }
  }
 else
  {
      printf("wrong username");
  }

 // getch();
}

