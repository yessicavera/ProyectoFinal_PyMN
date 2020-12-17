# incluye  < stdio.h >
# incluye  < math.h >
 
# definir  RAIZ ( x ) (log (abs (x)) + pow ((x), 2 ) - 4 )
 
int  main () {
flotar xi, xu, xr, xa, ea;
int iteraciones;
printf ( " Limite superior de la raiz: " );
scanf ( " % f " , & xi);
printf ( " Limite inferior de la raiz: " );
scanf ( " % f " , & xu);
 
iteraciones = 0 ;
xa = 0,0 ;
ea = 0 ;
printf ( " % 12s  % 10s  % 10s  % 10s  % 10s \ n " , " Iteraciones " , " Xi " , " Xu " , " Xr " , " Ea " );
 
hacer {
iteraciones ++;
xr = (xi + xu) / 2 ;
if (iteraciones> = 2 ) {
ea = ((xr - xa) / xr) * 100 ;
}
ea = fabs (ea);
printf ( " % 12d  % 10f  % 10f  % 10f  % 10f \ n " , iteraciones, xi, xu, xr, fabs (ea));
xa = xr;
si ( RAIZ (xr)> 0 ) {
xi = xr;
} más {
xu = xr;
}
 
} while (ea> 0.5 || (ea == 0.0 && iteraciones == 1 ));
 
printf ( " \ n La función es = 2xcos (2x) - (x + 1) 2); es: % f \ n " , xr);
 
return  0 ;
}
