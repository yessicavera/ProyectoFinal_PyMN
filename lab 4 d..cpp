# incluye < stdio.h >
int  main ()
{
	int arregloa [ 3 ];
	int i, j, suma;
	para (i = 0 ; i < 3 ; i ++)
	{
		printf ( " Ingrese el dato % d  " , i + 1 );
		scanf ( " % d " , & arregloa [i]);
		printf ( " \ n " );
	}
	para (j = 0 ; j < 3 ; j ++)
	{
		suma + = arregloa [j];
	}
	printf ( " El valor de la suma es % d " , suma);
	return  0 ;
}
