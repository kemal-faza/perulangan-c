/*Nama File 	: cekBilAll.c*/
/*Deskripsi 	: Program memeriksa apakah bilangan N merupakan bilangan prima, sempurna, atau biasa.*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 21.46*/
#include <stdio.h>

int main()
{
    // Kamus
    int N, faktor = 1, banyakFaktor = 0, totalFaktor = 0;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        while (faktor <= N)
        {
            if (N % faktor == 0)
            {
                if (N != faktor)
                {
                    totalFaktor += faktor;
                }
                banyakFaktor++;
            }
            faktor++;
        }
        if (banyakFaktor == 2)
        {
            printf("Bilangan %d merupakan bilangan prima", N);
        }
        else if (totalFaktor == N)
        {
            printf("Bilangan %d merupakan bilangan sempurna", N);
        }
        else
        {
            printf("Bilangan %d merupakan bilangan biasa", N);
        }
    }
}