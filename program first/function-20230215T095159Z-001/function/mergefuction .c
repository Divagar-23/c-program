/*name:divagar
date:25.1.23
topics:addition function*/
#include<stdio.h>
int add();   //with return without arg
void sub(int []); // without return with arg
void mul();//without agr and return
int div( int [],int);//with agr and return
//int mod();
int main()
{
 int n,i,operator,tem,d[100],g,s;
 int a[i] ;
 label:
 printf("enter the \n1.additon\n2.subtraction\n3.multiple\n4.divde\n press to 5.main menu\n press to 6.exist");
 scanf("%d",&operator);
switch (operator)
 {
	case 1:
		label1:
    //add();
    printf("%d",add());
    int z;
    printf("\npress 1 to contiuons addttion press 5to return to main :");
    scanf("%d",&z);
    if(z==1)
	{
	goto label1;	
	}
	system ("cls");
	goto label1;
//	printf("%d",add());
	
      break;
	case 2:
	label2:
		sub(a);
		int y;
	printf("/n press 2 contiuon subtraction press 5 to main:");
	scanf("%d",&y);
	if(y==1)	
   {
   	goto label2;
   }
   system("cls");
   goto label1;
//	printf("%d",sub());
	break;
	case 3:
		label3:
		mul();
		int x;
			printf("\n press to 3 multiplication continus and press 5 to main:");
			scanf("%d",&x);
			if(x==1)
			{
				goto label3;
			}
			system("cls");
			goto label1;
	//	printf("%d");
		break;
		case 4:
			label4:
			printf("how many num div:");
	scanf("%d",&g);
	for(i=0;i<g;i++)
	{
		scanf("%d",&d[i]);
	}
//	s=d[0];
			div(d,g);
			int w;
			printf("\n press 4 divide continous and press 5 to main:");
			scanf("%d",&w);
			if(w==1)
			{
				goto label4;
			}
			system("cls");
			goto label1;
		//	printf("%d",div);
			break;
 }
}
int add()
{
	int sum,i,n,a[10];
	sum=0;
	printf("how many num add:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	return sum ;
}
void sub(int a[])
{
	int i,mines,b[10],d;
	printf("how many num sub:");
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
		scanf("%d",&b[i]);
}
	mines=b[0];
	for(i=1;i<d;i++)
	{
		mines=mines-b[i];
	}
    printf("%d",mines);
}
    
void mul( )
{
	int i,c[10],f,mul=1;
	printf("how many num mul:");
	scanf("%d",&f);
	for(i=0;i<f;i++)
	{
      scanf("%d",&c[i]);		
	}
	for(i=0;i<f;i++)
	{

		mul=mul*c[i];
    }
	printf("\n%d\n",mul);
	
}
int div(int d[],int g)
{
	int i,s;
	s=d[0];
	//printf("%d",s);
	for(i=1;i<g;i++)
	{
		s=s/d[i];
	}
	printf("%d",s);
	//return div;
	
}
