#include <stdio.h>
#define pi 3.1416
int main()
{
	float v,r;
	printf("Ingrese el radio de la esfera:");
	scanf("%f",&r);
	v= ((4*pi*r*r*r)/3);
	printf(" El volumen de la esfera es de: %f ",v);
}
