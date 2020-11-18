#include <stdio.h>
#include <math.h>
int main(){
	
	printf("(#) Insert Number: "); float data;
	scanf("%f" , &data);
	
	printf("Tetragwno: %f\n" , data * data);
	printf("Kuklos: %f\n" , 3.141592 * data*data);
	printf("Isopleuro Trigwno: %f\n" , (data*sqrt(3))/4);
	printf("Ejagwno: %f\n" , (3*sqrt(3)*data*data)/2);
	printf("Oktagwno: %f\n" , data*data*(2 + 2*sqrt(2)));
	printf("Pentagwno: %f" , (sqrt(25+10*sqrt(5))*data*data)/4);
	
	
	return 0;
}
