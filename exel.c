#include <stdio.h>
#include <math.h>
float n;
float rx;
float xn;
float xy;
double h=(3.22580);

int main() 
{
	printf("podaj wartość n: ");
	scanf("%f", &n);
	printf("podaj wartość rx: ");
	scanf("%f", &n);
	xn=((rx)*(cos(n/h)));
	printf("xn: %f\n", xn);

	return 0;
}
