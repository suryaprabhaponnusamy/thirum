#include <stdio.h>

int main()
{
	float length,breadth;
	printf("enter the values of length and breadth: ");
	scanf("%f %f",&length,&breadth);
	float area;
	area=length*breadth;
	printf("%.5f",area);
	return 0;
}
