/*Nama File 	: cekBilPrima.c*/
/*Deskripsi 	: Program memeriksa apakah bilangan N merupakan bilangan prima atau bukan.*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 16.55*/
#include <stdio.h>

int main()
{
    // Kamus
    int N, faktor = 1, banyakFaktor = 0;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        while (faktor <= N && banyakFaktor <= 2)
        {
            if (N % faktor == 0)
            {
                banyakFaktor++;
            }
            faktor++;
        }
        if (banyakFaktor == 2)
        {
            printf("Bilangan %d merupakan bilangan prima", N);
        }
        else
        {
            printf("Bilangan %d bukan merupakan bilangan prima", N);
        }
    }
}