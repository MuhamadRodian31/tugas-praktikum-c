#include <stdio.h>

int main()
{
	int jari;
	float luas, keliling; jari = 7;
	
	luas = 3.14 * jari * jari;
	keliling = 2 * 3.14 * jari;
	
	printf (" LUAS & KELILING LINGKARAN");
	printf ("\nJari-Jari = %i", jari);
	printf ("\nLUAS = %.3f", luas);
	printf ("\nKELILING = %.2f", keliling);
	
	return 0;
	
}
