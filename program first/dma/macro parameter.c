/*
	Name:divagar 
	Copyright: 
	Author: 
	Date: 13-02-23 11:17
	Description: 
*/
#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}
