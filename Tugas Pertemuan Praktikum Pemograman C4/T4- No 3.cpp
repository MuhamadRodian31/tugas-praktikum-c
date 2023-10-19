#include <stdio.h>

int main() {
    int N;
	
	    printf("\nMasukkan nilai n: ");
    scanf("%d", &N);

    if (N > 50) {
        N -= 10; // Mengurangkan 10 dari N jika N > 50

        if (N < 45) {
            N += 25; // Menambahkan 25 ke N jika N sekarang kurang dari 50
        }
    } else if (N <= 50) {
    	N += 10; //Menambahkan 10 ke N jika N <= 50
    }

    printf("Nilai N setelah penanganan: %d\n", N);

    return 0;
}
