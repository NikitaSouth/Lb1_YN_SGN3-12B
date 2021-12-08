#include<stdio.h>

int main()
{
	float x, y, projection;
	printf("Please, enter X and Y chords of the point: ");
	scanf_s("%f%f", &x, &y);
	projection = x / 2 + 1;
	if (y == projection){
		printf("The point is located on graphic");
	} else if (y < projection) {
		printf("The point is located under the line");
	} else if (y > projection) {
		printf("The point is located above the line");
	}
	return 0;
}