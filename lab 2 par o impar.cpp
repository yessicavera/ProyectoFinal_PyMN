#include <stdio.h>
int main()
{
	int x;
	printf (" Ingrese un numero: ");
	scanf ("%d",&x);
	if (x%2==0)
	{
		printf (" El numero es par.");
	}
	else
	{
		printf (" El numero es impar. ");
	}
	return 0;
}
