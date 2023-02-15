/*name:divagar
 date:6.1.23
 topics:weekdays*/
#include<stdio.h>
#include<conio.h>
   void main()
  {
   clrscr();
   char M;
   printf("enter the weekdays");
   scanf("%c",&M);
   switch(M)
     {
     case 'M':
	      {
	       printf("monday");
	       break;
	       }
    case 'T':
	     {
	      printf("tuesday");
	      break;
	      }
    case 's':
	     {
	      printf("SATURDAY");
	      break;
	      }
    case 'S':
	     {
	      printf("SUNDAY");
	      break;
	      }
    default:
    {
    printf("divagar");
     }
      }
    getch();
   }
