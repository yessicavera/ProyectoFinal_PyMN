# incluye  < stdio.h >
# incluye  < stdlib.h >
# incluye  < math.h >



 men� vac�o ( vac�o );
void  adelante2Terminos ( float h);
void  atras2Terminos ( float h);
void  central4Terminos ( float h);

int  main () {
	men� ();
	return  0 ;
}
 men� vac�o ( vac�o )
{
    int op;
    flotar h;
	hacer {
		sistema ( " cls " );
		printf ( " \ n MEN� " );
		printf ( " \ n 1.-Diferenciacion hacia adelante con 2 terminos O (h ^ 2). " );
		printf ( " \ n 2.-Diferenciacion hacia atras con 2 terminos O (h ^ 2). " );
		printf ( " \ n 3.-Diferenciaci�n centrada con los 4 t�rminos definidos O (h ^ 4). " );
		printf ( " \ n 0.-SALIR " );
		printf ( " \ n ESCOJE UNA OPCION " );
		scanf ( " % d " , & op);
		interruptor (op)
		    {
			
		        caso  1 : printf ( " ingresa el valor del incremento " );
		                scanf ( " % f " , & h);
		                adelante2Terminos (h);
						romper ;
		        caso  2 : printf ( " ingresa el valor del incremento " );
		                scanf ( " % f " , & h);
		                atras2Terminos (h);
				        romper ;
		        caso  3 : printf ( " ingresa el valor del incremento " );
		                scanf ( " % f " , & h);
		                central4Terminos (h);
				        romper ;
		    }
	} while (op! = 0 );
	
}

void  adelante2Terminos ( float h)
{
	flotar x1, x2, fx, fx2, fx1, fxi, xi = 0.6 ;
	x1 = xi + h;
	x2 = x1 + h;
	fxi = 1 + exp (-xi / 0,2 );
	fx1 = 1 + exp (-x1 / 0,2 );
	fx2 = 1 + exp (-x2 / 0,2 );
	fx = (- fx2 + 4 * fx1- 3 * fxi) / ( 2 * h);
	printf ( " % f \ n " , fx);
	sistema ( " pausa " );
}

void  atras2Terminos ( float h)
{
	flotar x1, x2, fx, fx2, fx1, fxi, xi = 0.6 ;
	x1 = xi-h;
	x2 = x1-h;
	fxi = 1 + exp (-xi / 0,2 );
	fx1 = 1 + exp (-x1 / 0,2 );
	fx2 = 1 + exp (-x2 / 0,2 );
	fx = ( 3 * fxi- 4 * fx1 + fx2) / ( 2 * h);
	printf ( " % f \ n " , fx);
	sistema ( " pausa " );
}

void  central4Terminos ( float h)
{
	flotar x1, x2, xi1, xi2, fx, fx2, fx1, fxi, fxi1, fxi2, xi = 0.6 ;
	x1 = xi-h;
	x2 = x1-h;
	xi1 = xi + h;
	xi2 = x1 + h;
	fxi = 1 + exp (-xi / 0,2 );
	fx1 = 1 + exp (-x1 / 0,2 );
	fx2 = 1 + exp (-x2 / 0,2 );
	fxi1 = 1 + exp (-xi1 / 0,2 );
	fxi2 = 1 + exp (-xi2 / 0,2 );
	fx = (- fxi2 + 8 * fxi1- 8 * fx1 + fx2) / ( 12 * h);
	printf ( " % f \ n " , fx);
	sistema ( " pausa " );
}
