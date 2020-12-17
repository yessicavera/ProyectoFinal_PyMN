# incluye < stdio.h >
int  main ()
{
	int A [ 4 ] [ 4 ];
	int i, j, b, l;
	para (i = 0 ; i < 4 ; i ++)
	{
		para (j = 0 ; j < 4 ; j ++)
		{
			printf ( " Ingrese un dato " );
			scanf ( " % d " , & A [i] [j]);
		}
	}
	
		para (i = 0 ; i < 4 ; i ++)
	{
		para (j = 0 ; j < 4 ; j ++)
		{
			printf ( " % d  " , A [i] [j]);
		
		}
			printf ( " \ n " );
	}
	
	return  0 ;
}
