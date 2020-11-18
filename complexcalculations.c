#include <stdio.h>
int main()
{
float c;
int d;
float pro,af,pol,di,up;
printf("Dwse enan dekadiko arithmo:  ");
scanf("%f",&c);
printf("Dwse enan akereo arithmo:  ");
scanf("%d", &d);
pro=c+d;
af=c-d;
pol=c*d;
di=c/d;
up=(int)c % d;
printf("To apotelesma tis prosthshs(+) twan arithmwn einai %f\n",pro);
printf("To apotelesma tis afairesis(-) twan arithmwn einai %f\n", af);
printf("To apotelesma tou poll/mou(*) twan arithmwn einai %f\n", pol);
printf("To apotelesma tis dieraisis(/) twan arithmwn einai %f\n", di);
printf("To akeraio upoloipo twn aritmwn einai: %f", up);
 return 0;
}
