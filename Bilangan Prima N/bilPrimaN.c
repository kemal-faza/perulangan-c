/*Nama File 	: bilPrimaN.c*/
/*Deskripsi 	: Program menampilkan bilangan prima dari 1 sampai N.*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 16.55*/
#include <stdio.h>

int main()
{
    // Kamus
    int N, i, faktor, banyakFaktor;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        printf("Bilangan primanya adalah: \n");
        for (i = 1; i <= N; i++)
        {
            faktor = 1, banyakFaktor = 0;
            while (faktor <= i && banyakFaktor <= 2)
            {
                if (i % faktor == 0)
                {
                    banyakFaktor++;
                }
                faktor++;
            }
            if (banyakFaktor == 2)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}