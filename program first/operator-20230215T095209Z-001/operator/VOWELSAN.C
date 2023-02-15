/*name:divagar
 date:5.1.23
 topics:vowels and constant*/
#include<stdio.h>
#include<conio.h>
 void main()
{
  char num;
 clrscr();
 scanf("%c",&num);
 (num=='a'||num=='e'||num=='i'||num=='o'||num=='u')?(printf("vowels")):(printf("constant"));
 getch();
}
