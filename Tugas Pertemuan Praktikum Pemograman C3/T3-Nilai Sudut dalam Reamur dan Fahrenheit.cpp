#include <stdio.h>

int main()
{
    float celci;
    float fahrenheit;
    float reamur;
    float hitungfah;
    float hitungrea;

    printf("Masukan Bilangan bulat dalam Celcius: ");
    scanf("%f",&celci);

    hitungfah = (celci * 1.8) + 32;
    hitungrea = celci * 0.8;

    printf("Celci ke Farenheit: %.2f \n" , hitungfah);
    printf("Celci ke Reamur: %.2f", hitungrea);
    
    return 0;


}
