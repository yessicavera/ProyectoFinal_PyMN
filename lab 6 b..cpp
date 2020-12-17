# incluye < stdio.h > 
# incluye < stdlib.h >
# incluye < math.h >
# include < conio.h >

flotador  funcion2 ( flotador x);
float  ep ( float x, float y);




int  main () {
	flotar x0 = 3 , x2, x1 = - 4 , tolerancia = 0.000001 , error;
	int i = 0 ;
	hacer {
	

x2 = x1 - (( función2 (x1) * (x0-x1)) / ( función2 (x0) - función2 (x1)));
error = ep (x1, x2);

x0 = x1;
x1 = x2;
i ++;
printf ( " iteracion % d  % f  \ n " , i, x2);
} while (error> tolerancia);

printf ( " la raiz es % f " , x2);
return  0 ;
	
}
