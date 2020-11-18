#include <stdio.h>
int main()
{
float cel,fah;
	printf("Give a decimal Calsius degrees number:  ");
	scanf("%f", &cel);
fah=cel*9/5+32;
	printf("That is %f degrees Faherenheit",fah);
	return 0;
}
