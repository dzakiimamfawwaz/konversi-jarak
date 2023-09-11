#include <stdio.h>

int main() {
    double km, m, cm;
    int percobaan = 1;
    int limitPercobaan = 5;
while (km !=0) // buat looping
{
    if (percobaan <= limitPercobaan)
    {
      // Masukkan jarak dalam kilometer
    printf("\nMasukkan Jarak Dalam Kilometer Dan Enter: ");
    scanf("%lf", &km);
    percobaan++;
    
    if (km <= 0){
        printf("Input Invalid!!! (masukkan angka > 0)" );
        return 1;
    }
    

    // Konversi ke meter dan sentimeter
    m = km * 1000;
    cm = km * 100000;

    // Tampilkan hasil konversi
    printf("Panjang Dalam Meter: %.2lf m\n", m);
    printf("Panjang Dalam Sentimeter: %.2lf cm\n", cm);
    }else
    {
    	printf("\n============================");
        printf("\n Terimakasih Sudah Mencoba");
        printf("\n============================");
        return 1;
    }
    
    
}


    return 0;
}
