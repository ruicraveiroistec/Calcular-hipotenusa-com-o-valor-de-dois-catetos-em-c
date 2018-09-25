#include <stdio.h>	
#include <math.h>
int main()                            
{
    float med1, med2, med3, med4, med5, h;                         
    med1 = 0;
    printf( "Medida do primeiro cateto:\n" );  
    scanf( "%f", &med1 );
	printf( "Medida do segundo cateto:\n" );  
    scanf( " %f", &med2 );
    med3 = med1*med1;
    printf( "1 vezes 1: %f\n", med3 );
    med4 = med2*med2;
    printf( "2 vezes 2: %f\n", med4 );
    med5 = med3+med4;
    printf( "4: %f\n", med4 );
	h = sqrt(med5);
    printf( "O valor da hipotenusa e: %f\n", h );
  return 0;
}
