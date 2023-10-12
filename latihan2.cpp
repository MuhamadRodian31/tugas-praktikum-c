#include <stdio.h>
#include <string.h>

int main()
{
	char nim [10];
	char nama[30];
	int nilai;
	
    strcpy (nim, "2143012257");
	strcpy(nama, "Muhamad Rodian Ihban");
	nilai = 85;
	
	printf ("NIM : %s", nim);
	printf ("NAMA : %s", nama);
	printf ("NILAI : %i", nilai);
	
	return 0;
	
}
