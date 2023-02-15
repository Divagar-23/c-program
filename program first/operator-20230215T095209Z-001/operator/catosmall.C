/*name:divagar
 date:3.1.23
 task:captial to small*/
#include<stdio.h>
#include<conio.h>
  int main()
 {
  char capital1,capital2;
  //clrscr();
  printf("enter capital only");
  scanf("%c %c",&capital1,&capital2);
  capital1=capital1+32;
  capital2=capital2-32;
  printf("\n capital to small %c",capital1);
  printf("\n small to capital %c",capital2);
 // getch();
  }
