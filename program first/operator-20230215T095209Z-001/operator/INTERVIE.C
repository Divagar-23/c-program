/*name:divagar
  date:3.1.23
  task:bitwise opertor*/
  #include<stdio.h>
  #include<conio.h>
  void main()
{
  int n,setpos,clearpos ;
  int set,clear;
  clrscr();
  scanf("%d%d%d",&n,&setpos,&clearpos);
  n=(n^  (n|(1<<setpos))  ^ (n&(~(1<<clearpos))));
  //set=n|(1<<setpos);
  //clear=n&(~(1<<clearpos));
  //printf("\nset=%d\nclear=%d",set,clear);
  printf("n|(1<<position is %d",n);
  getch();
}


