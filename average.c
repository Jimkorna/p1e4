#include <stdio.h>
int main()
{
	int a, b, mo;
	printf("Give the first integer number: "); 
	scanf("%d" , &a);
	printf( "Give the second integer number: ");
	scanf("%d" , &b);
	mo = (a + b) / 2;
	printf("The average of those numbers is: %d", mo);
	return 0;
}
