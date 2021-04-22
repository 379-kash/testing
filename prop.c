#include<stdio.h>

#define PI 3.14

int main(){

	float r;
	float area;
	scanf("please enter the radius %f\n",&r);
	area=PI*r*r;
    printf("your area is \n");
	printf("the area of circle is %0.3f\n",area);
	return (0);
}
