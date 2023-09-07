#include <conio.h>
#include <stdio.h>

int main()
{
	int n1, n2,  n3, producto, resta;
	
	printf( "\n Introduzca el primer numero (entero): " );
	scanf( "%d", &n1 );
	printf( "\n Introduzca el segundo numero (entero): " );
	scanf( "%d", &n2 );
	printf( "\n Introduzca el tercer numero (entero): " );
	scanf( "%d", &n3 );
	
	resta = n1 - n2 - n3;
	
	printf( "\n La resta es: %d", resta );
	
	getch(); /* Pausa */
	
	return 0;
}
