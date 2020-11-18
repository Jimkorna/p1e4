#include <stdio.h>
int main()
{
	float fah,cel;
	printf("Give a decimal Faherenheit degrees number:  ");
	scanf("%f", &fah);
	cel=(fah - 32) * 5 / 9 ;
	printf("That is %f degrees Calsius",cel);
	return 0;
}
