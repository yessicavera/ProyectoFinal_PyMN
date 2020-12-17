# incluye  < stdio.h >
# incluye < math.h >
principal ()
{
      int binario [ 100 ], i = 0 , j = 0 , x;
      printf ( " dame un numero: \ n " );
      fflush (stdin);
      scanf ( " % d " , & x);
      para (i = 100 ; i> 0 ; i--)
      {
           binario [i] = x% 2 ;
           x = x / 2 ;
      }
      para (i = 1 ; i <= 100 ; i ++)
      {
           si (binario [i] == 1 )
           {
           	para (j = i; j <= 100 ; j ++)
                {
                     printf ( " % d " , binario [j]);
                }
                romper ;
           }
      }
      sistema ( " pausa " );
}

