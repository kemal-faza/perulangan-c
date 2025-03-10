/*Nama File 	: cekBilSemp.c*/
/*Deskripsi 	: Program memeriksa apakah bilangan N merupakan bilangan sempurna atau bukan*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 17.00*/
#include <stdio.h>

int main()
{
    // Kamus
    int N, faktor = 1, totalFaktor = 0;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        while (faktor < N)
        {
            if (N % faktor == 0)
            {
                totalFaktor += faktor;
            }
            faktor++;
        }

        if (totalFaktor == N)
        {
            printf("Bilangan %d merupakan bilangan sempurna", N);
        }
        else
        {
            printf("Bilangan %d bukan merupakan bilangan sempurna", N);
        }
    }

    return 0;
}