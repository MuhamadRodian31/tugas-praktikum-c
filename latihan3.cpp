#include <stdio.h>
#include <string.h>

int main()
{
	char nim [10];
	char nama[30];
	int kehadiran, tugas, uts, uas;
	float nilai_akhir;
	
	
	strcpy (nim, "2143012257");
	strcpy(nama, "Muhamad Rodian Ihban");
	kehadiran = 100;
	tugas = 90;
	uts = 83;
	uas = 86;
	
	nilai_akhir = (0.1 * kehadiran) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);
	
	printf ("NIM \t : %s", nim);
	printf ("\nNAMA \t : %s", nama);
	printf ("\nKEHADIRAN \t : %i", kehadiran);
	printf ("\nTUGAS \t : %i", tugas);
	printf ("\nUTS \t : %i", uts);
	printf ("\nUAS \t : %i", uas);
	printf ("\nNILAI AKHIR \t : %.2f", nilai_akhir);
	
	return 0;
	
	
	
}
