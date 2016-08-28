#include <stdio.h>
#include <stdlib.h>
/*
Comments go here
*/

int main()
{
	int radius;
	double area;
	printf("Please enter a number: ");
	scanf("%d", &radius);
	printf("Calculating circle\n");
	area = radius * radius * 3.14;
	for (int x = 0; x < 5; x++)
	{
		printf("%lf", area);
		printf("\n");
	}
	system("PAUSE");
}
