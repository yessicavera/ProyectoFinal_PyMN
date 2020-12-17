#include <stdio.h>
int main()
{
	float peso,estatura,IMC;
	int edad;
	char nombre;
	printf(" Ingresa tu nombre: ");
	scanf("%s",&nombre);
	printf(" Ingresa tu edad: ");
	scanf("%d",&edad);
	printf(" Ingresa tu peso en kg: ");
	scanf("%f",&peso);
	printf(" Ingresa tu estatura: ");
	scanf("%f",&estatura);
	IMC=(peso/(estatura*estatura));
	printf(" Tu indice de masa corporal es %f ",IMC);
	return 0;
}
