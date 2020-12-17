# incluye < stdio.h >
# incluye < stdlib.h >
# incluye < math.h >
# include < conio.h >
flotador  funcion1 ( flotador x);
flotar  derivada ( flotar x);
float  errorporcentual ( float x, float y);

int  main () {
	float a, b, xi, tolerancia, raiz = 0 , error, xi2, e;
	int i = 0 ;
printf ( " Ingresa el valor inicial \ n " );
	scanf ( " % f " , & xi);
	printf ( " Ingresa el margen de error o tolerancia de error " );
	scanf ( " % f " , & tolerancia);
		
	hacer {
		a = función1 (xi);
      	b = derivada (xi);
      		


	raiz = xi- (a / b);	
		e = errorporcentual (raiz, xi2);
		
		if (e> tolerancia) {
			xi = raiz;
			xi2 = xi;	
		}
		
			i ++;
		
		printf ( " iteracion % d   % f \ n " , i, raiz);
	} while (e> tolerancia);
	
	printf ( " la raiz aproximada es % f " , raiz);	
return  0 ;	
}



float  funcion1 ( float x) {
	
	return  exp (-x) -x;
	
}


flotar  derivada ( flotar x) {
	
	retorno - exp (-x) - 1 ;

}
float  errorporcentual ( float x, float y) {
	
	
	return  fabs ((xy) / x) * 100 ;
}
