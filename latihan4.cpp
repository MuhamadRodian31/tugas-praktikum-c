#include <stdio.h>

int main()
{
	int a, b;
	a = 5;
	printf ( "A = %i", a);
	printf ( "\nA = %i", a++);
	printf ( "\nA = %i", a);
	
	
	b = 10;
	printf ( "B = %i", b);
	printf ( "\nB = %i", ++b);
	printf ( "\nB = %i", b);
	
	return 0;
	
}
