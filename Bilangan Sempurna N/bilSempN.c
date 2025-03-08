/*Nama File 	: bilSempN.c*/
/*Deskripsi 	: Program menampilkan bilangan sempurna dari 1 sampai N*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 17.00*/
#include <stdio.h>

int main()
{
    // Kamus
    int N, faktor, totalFaktor;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        printf("Bilangan sempurnanya adalah: \n");
        for (int i = 1; i <= N; i++)
        {
            faktor = 1, totalFaktor = 0;
            while (faktor < i)
            {
                if (i % faktor == 0)
                {
                    totalFaktor += faktor;
                }
                faktor++;
            }
            if (totalFaktor == i)
            {
                printf("%d\n", i);
            }
        }
    }
}