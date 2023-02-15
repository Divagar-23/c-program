/*name:divagar
 date:10.1.23
 topics:nested do ehile*/
#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("enter the num");
	scanf("%d%d",&n,&m);
	i=n;
	printf("square pattern\n\n");
	printf("here the pattern\n\n");
	do
	{
		j=1;
		do
		{
			printf("%d",j);
			j++;
		}
		while(j<=m);
		printf("\n");
		i++;
	}
	while(i<=10);
	
}
